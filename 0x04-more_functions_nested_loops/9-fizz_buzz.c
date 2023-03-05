#include <stdio.h>

/**
 * main - prints 0 to 99 substituting:
 * numbers divisible by 3 with Fizz
 * numbers divisible by 5 with Buzz
 * numbers divisible by 3 and 5 with FizzBuzz
 * Return: void
*/
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
