

/**
 * _memset - fills some memory with a constant character
 *
 * @s: a pointer to the memory chunck
 * @b: the character to fill the memory with
 * @n: #bytes to fill with b
 * Return: a pointer to the meomory filled with the character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
