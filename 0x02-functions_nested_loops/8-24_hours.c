#include "main.h"

/**
 * jack_bauer - prints everty minute of the day
 * Return: nothing. it just prints
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(48 + i);
			}
			else
			{
				_putchar(48 + i / 10);
				_putchar(48 + i % 10);
			}

			_putchar(':');

			if (j < 10)
			{
				_putchar('0');
				_putchar(48 + j);
			}
			else
			{
				_putchar(48 + j / 10);
				_putchar(48 + j % 10);
			}

			_putchar('\n');
		}
	}
}
