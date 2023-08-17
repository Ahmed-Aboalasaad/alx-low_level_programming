#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation
 *
 * Description: no switch, for, do..while, goto, else
 * allowed: one if, one while
 * @s: the operator passed to the program
 * Return: a pointer to the function that corresponds to the operator
 * given as a parameter, or NULL for invalid operators
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
