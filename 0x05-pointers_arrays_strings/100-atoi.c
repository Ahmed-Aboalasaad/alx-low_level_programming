#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: the string
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int i;

    for (i = 0; s[i]; i++)
    {
        // ignore white space
        if (s[i] == ' ' || s[i] == '\t')
            continue;

        //
    }
}

int main(void)
{
    printf("it's: %d\n", atoi("      --29"));
    /*
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);

    */
    return (0);
}