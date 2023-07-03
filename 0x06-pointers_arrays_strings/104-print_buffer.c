#include <stdio.h>

/**
 * fill_gaps - fills the gaps that the hex lefted (allignemnt)
 *
 * @size: the buffer size
 * @sizeCopy: the copy of size that the hex printer used
 * Return: void
 */
void fill_gaps(int size, int sizeCopy)
{
	/* fill in spaces if you ran out of characters */
	if (size - sizeCopy != 10)
	{
		if (size % 2)
			sizeCopy += 3, printf("   ");
		while (sizeCopy + 2 < size)
			sizeCopy += 2, printf("     ");
	}
}

/**
 *  print_buffer - prints a buffer of characters formatted
 *
 * @b: pointer to the buffer
 * @size: buffer size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, sizeCopy;
	char symbol;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; size > 0; i++)
	{
		printf("%08x: ", i * 10);
		sizeCopy = size;
		for (j = 0; j < 10; j += 2)
		{
			if (sizeCopy > 0)
				printf("%02x", b[10 * i + j]);
			else
				break;
			sizeCopy--;

			if (sizeCopy > 0)
				printf("%02x ", b[10 * i + j + 1]);
			else
				break;
			sizeCopy--;
		}
		fill_gaps(size, sizeCopy);
		for (j = 0; j < 10; j++)
		{
			if (size == 0)
				break;
			symbol = b[i * 10 + j];
			if (symbol > 31 && symbol < 127)
				printf("%c", symbol);
			else
				printf(".");
			size--;
		}
		printf("\n");
	}
}
