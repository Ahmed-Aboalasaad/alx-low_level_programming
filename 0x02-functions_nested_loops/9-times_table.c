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
		/* the same for all lines */
		_putchar('0');
		_putchar(',');

		for (j = 1; j < 10; j++)
		{
			/* a space for all the numbers */
			_putchar(' ');

			/* write the number in a formatted way */
			if (i * j < 10)
			{
				_putchar(' ');
				_putchar(48 + j);
			}
			else
			{
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
