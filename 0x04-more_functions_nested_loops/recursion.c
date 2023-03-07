#include "main.h"
#include <stdio.h>

unsigned long int isPrime(unsigned long int num);

/**
 * main - prints the largest prime factor of the number 612852475143
 * followed by a new line.
 * Return: always 0
*/
int main(void)
{
	unsigned long int i, j,
    largestFactor = 1,
    x = 612852475143; /* of 12 digits */

    for (j = 1; x != 1; j++)
	{
        /* divide x with the smallest prime factor of it */
        for (i = 2; i < x; i++)
        {
            if (x % i == 0 && isPrime(i))
            {
                x /= i;
                if (i > largestFactor) /* check the largest factor so far */
                    largestFactor = i;
                break;
            }

        }
        printf("finished for loop %lu times\n", j);
	}
    printf("largest prime factor: %lu\n", largestFactor);

	return (0);
}

unsigned long int isPrime(unsigned long int num)
{
	unsigned long int i;

	if (num == 1 || num == 2)
        return (1);
    else
    {
        for (i = 2; i < num; i++)
		    if (num % i == 0)
			    return (0);
    }
	return (1);
}
