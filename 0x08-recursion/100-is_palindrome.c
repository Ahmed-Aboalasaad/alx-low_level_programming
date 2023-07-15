#include "main.h"

/**
 * length - finds the length of the given string
 *
 * @s: the string
 * Return: the length (#characters)
 */
int length(char *s)
{
	if (s[0])
		return (1 + length(++s));
	return (0);
}

/**
 * helper - helps is_palindrome
 *
 * @s: the string
 * @back: the inex of the end on the left
 * @front: the index of the end on the right
 * Return: the same as is_palidrome
 */
int helper(char *s, int back, int front)
{
	if (s[back] != s[front]) /* differnt characters */
		return (0);
	if (back > front) /* base case */
		return (1);
	return (helper(s, back + 1, front - 1));
}

/**
 * is_palindrome - 1 if a string is a palindrome and 0 if not
 *
 * @s: the string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	return (helper(s, 0, length(s) - 1));
}
