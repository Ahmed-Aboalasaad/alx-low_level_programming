/**
 * _strstr - locates a substring
 *
 * @haystack: the string we seach in
 * @needle: the string we search for
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, found;

	for (i = 0; haystack[i]; i++)
	{
		found = 0;
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				found = 0;
				break;
			}
			found = 1;
		}
		if (found)
			return (haystack + i);
	}

	return (0);
}
