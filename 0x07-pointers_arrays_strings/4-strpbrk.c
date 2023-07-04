/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the string to be searched
 * @accept: the accepted characters
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, found;

	for (i = 0; s[i]; i++)
	{
		found = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found)
			return (s + i);
	}

	return (0);
}
