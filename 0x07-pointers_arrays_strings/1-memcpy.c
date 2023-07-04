

/**
 * _memcpy - copies a memory area
 *
 * @dest: destination
 * @src: source
 * @n: #bytes to copy
 * Return: a pointer to the destination;
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
