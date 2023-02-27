/**
 * _islower - checks for lower case characters
 * @c: the chatacter to check if it was lower case
 *
 * Return: returns 1 if c is lower case and 0 otherwise
 */
int _islower(int c)
{
	return ((c > 96 && c < 123) ? 1 : 0);
}
