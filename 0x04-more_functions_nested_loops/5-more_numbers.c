#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: void
*/
void more_numbers(void)
{
	int i, j, round2;

	for (i = 0; i < 10; i++)
	{
		round2 = 0;
		for (j = 48; j < 62; j++)
		{
			if (round2 && j > 52)
				break;

			if (j == 58)
			{
				j -= 10;
				round2 = 1;
			}

			if (round2)
				_putchar('1');

			_putchar(j);
		}
		_putchar('\n');
	}
}
