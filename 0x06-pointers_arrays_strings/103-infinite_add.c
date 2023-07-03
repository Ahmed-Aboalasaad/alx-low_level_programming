#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * infinite_add - adds 2 numbers of any size
 *
 * @n1: number 1
 * @n2: number 2
 * @r: a buffer to store the result
 * @size_r: the buffer size
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, digitCount1 = 0, digitCount2 = 0, carry = 0, tmp;
	int n1Exists = 1, n2Exists = 1, largerDigitCount, resultSize;
	int remaining = size_r;
	char *res;

	for (i = 0; n1[i]; i++)
		digitCount1++;
	for (i = 0; n2[i]; i++)
		digitCount2++;
	largerDigitCount = (digitCount1 > digitCount2) ? digitCount1 : digitCount2;
	if (size_r < largerDigitCount + 2)
		return (0);
	while (remaining > 0)
	{
		n1Exists = (digitCount1 > 0);
		n2Exists = (digitCount2 > 0);
		tmp = 0;
		if (n1Exists)
			tmp += n1[digitCount1 - 1] - 48;
		if (n2Exists)
			tmp += n2[digitCount2 - 1] - 48;
		tmp += carry;
		if (tmp == 0)
			break;
		else if (tmp > 9)
			r[remaining - 1] = (tmp % 10) + 48, carry = tmp / 10;
		else
			r[remaining - 1] = tmp + 48, carry = 0;
		remaining--, digitCount1--, digitCount2--;
	}
	resultSize = size_r - remaining + 1;
	res = (char *)malloc((resultSize));
	for (i = 0; i < resultSize; i++)
		res[i] = r[i + remaining];
	res[resultSize - 1] = '\0';
	return (res);
}
