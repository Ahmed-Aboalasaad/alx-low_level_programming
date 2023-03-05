/**
 * _isupper - checks for uppercase character
 * @c: the character
 * Return: 1 if c is uppercase and 0 otherwise
*/
int _isupper(int c)
{
	return ((c > 64 && c < 91) ? 1 : 0);
}
