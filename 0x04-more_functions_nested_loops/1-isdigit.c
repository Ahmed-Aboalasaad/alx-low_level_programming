/**
 * _isdigit - checks for digit 0 through 9
 * @c: the character ascii code
 * Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
