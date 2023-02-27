/**
 * _isalpha - checks for alphabetic characters
 * @c: the character to be checked
 * Return:  Returns 1 if c is a letter, lowercase or uppercase,
 * and 0 otherwise
*/
int _isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123) ? 1 : 0);
}
