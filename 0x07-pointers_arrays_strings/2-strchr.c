
/**
 * _strchr - searches for a character in a string
 *
 * @s: the string to search in
 * @c: the character to seasrch for
 * Return: a pointer to the first occurence of c / NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (0);
}
