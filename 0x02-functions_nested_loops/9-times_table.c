#include "main.h"

/**
 * times_table - prints the 9 times table
 * Retrun: nothing just prints
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 10; j++)
		{
			/* write the number in a formatted way */
			if (j == 0)
				_putchar('0');
			else if (i * j < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + i * j);
			}
			else
			{
				_putchar(' ');
				_putchar(48 + i * j / 10);
				_putchar(48 + i * j % 10);
			}

			/* put a comma after the number except for the last one in the row*/
			if (j != 9)
				_putchar(',');
		}

		_putchar('\n');
	}
}
