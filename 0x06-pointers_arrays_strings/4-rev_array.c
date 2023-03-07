#include "main.h"

/**
 * reverse_array - reverses teh content of an arary of integers
 * @a: the array pointer
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int length, i, j;

	length = n;

	/* I'm using the same metod of substituting 2 integers without third one */

	/* add the corresponding form right side to the left side */
	for (i = 0; i < length / 2; i++)
		a[i] += a[length - 1 - i];

	/*
	 * replace corresponding right with (left - right)
	 * different in odd than even
	 */
	if (length % 2 == 0)
		for (i = length / 2, j = (length / 2) - 1; i < length; i++, j--)
			a[i] = a[j] - a[i];
	else
		for (i = (length / 2) + 1, j = (length / 2) - 1; i < length; i++, j--)
			a[i] = a[j] - a[i];

	/* replace corresponding left with (left - right) */
	for (i = 0; i < length / 2; i++)
		a[i] -= a[length - 1 - i];
}
