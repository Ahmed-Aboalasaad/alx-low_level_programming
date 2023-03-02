#include "main.h"


void print_n_digits(int n, int i, int j);

/**
 * print_times_table - prints the n times table (starting from n)
 * @n: starting point
 * Retrun: nothing just prints
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i < n + 1; i++)
		{

			for (j = 0; j < n + 1; j++)
			{
				/* write the number in a formatted way */
				if (j == 0)
					_putchar('0');
				else if (i * j < 10) /* one digit */
				{
					print_n_digits(1, i, j);
				}
				else if (i * j < 100) /* two digits */
				{
					print_n_digits(2, i, j);
				}
				else
				{
					print_n_digits(3, i, j);
				}

				/* put a comma after the number except for the last one in the row*/
				if (j < n)
					_putchar(',');
			}

			_putchar('\n');
		}
	}
}

void print_n_digits(int n, int i, int j)
{
	if (n == 1)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(48 + i * j);
	}
	else if (n == 2)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(48 + i * j / 10);
		_putchar(48 + i * j % 10);
	}
	else if (n == 3)
	{
		_putchar(' ');
		_putchar(48 + i * j / 100);
		_putchar(48 + i * j % 100 / 10);
		_putchar(48 + i * j % 100 % 10);
	}
}
