/**
 * _strlen - calculates the length of a string
 * @s: the string
 * Return: the string length
 */
int _strlen(char *s)
{
	int counter = 0;

	while (1)
	{
		if (!s[counter])
			break;
		counter++;
	}
	return (counter);
}
