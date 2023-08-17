#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *get_script()
{
	char *str = "objdump -d -j.text -M intel main | awk '/^[[:space:]]"
	"*([[:xdigit:]]+):[[:space:]]+([[:xdigit:]]+[[:space:]]"
	"+)+/ {print $2}'";
	
	return (str);
}

/**
 * main - entry point
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 when succeeds
*/
int main(int argc, char *argv[])
{
	int bytes, i, printed;
	char *disassembled;
	FILE *fp;
	char path[1035], result[10000] = "";
	char *script = get_script();

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}
	bytes = atoi(argv[1]);
	/* Open the command for reading. */
	fp = popen(script, "r");
	if (fp == NULL)
	{
		printf("Failed to run command\n");
		exit(1);
	}
	while (fgets(path, sizeof(path), fp) != NULL) /* Read */
		strcat(result, path);
	pclose(fp);
	for (printed = 0; printed < bytes; printed++)
	{
		printf("%c", result[i++]);
		printf("%c", result[i]);
		i += 2;
		if (printed != bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
