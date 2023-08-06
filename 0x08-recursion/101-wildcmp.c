#include "main.h"

/**
 * wildcmp - compares 2 strings
 *
 * s2 can have a (*) wildcard
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    // handle wild cards
    if (s2[0] == '*')
    {
        if
    }
    return (wildcmp());
    if (s1[0] == s2[0]) // similar characters
        return (wildcmp(++s1, ++s2));
    else // different characters (not identical)
        return (0);
}

/**
 * helper - helps wildcmp
 *
 *
 */
int usual_compare(char *s1, char *s2)
{
    if (s1[0] != s2[0])
        return (0);
    else
        return (usual_compare(s1, s2));
}
