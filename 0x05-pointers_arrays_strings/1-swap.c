/**
 * swap_int - swaps 2 integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}
