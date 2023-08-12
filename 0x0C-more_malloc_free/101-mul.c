#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void print(char *str);
int isDigits(char *str);
void arrange(char *n1, int size1, char *n2, int size2);
char *sum(char *n1, int size1, char *n2, int size2);
char *multiply_1_many(char *str, int size, char c);
char *cleanLeadingZeroes(char *str);
char *concat_zeroes(char *str, int zeroesToAdd);
int strSize(char *str);

/**
 * main - multiplies 2 numbers
 *
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: 0 when it succeeds
 */
int main(int argc, char *argv[])
{
	char *first, *second, *tmp, *result;
	int i, k, size1, size2;

	if (argc != 3 || !isDigits(argv[1]) || !isDigits(argv[2]))
	{
		print("Error\n");
		exit(98);
	}

	/* Count & put the larger up*/
	size1 = strSize(argv[1]);
	size2 = strSize(argv[2]);
	if (size1 >= size2)
	{
		first = argv[1];
		second = argv[2];
	}
	else
	{
		first = argv[2];
		second = argv[1];
		i = size1;
		size1 = size2;
		size2 = i;
	}
	/*
	 * Now first is the larger number with size1
	 * & second the the smaller wtih size2
	 */

	/* Multiplication */
	result = concat_zeroes("", size1 + size2);

	for (i = size2 - 1, k = 0; i >= 0; i--, k++)
	{
		tmp = multiply_1_many(first, size1, second[i]);
		tmp = concat_zeroes(tmp, k);
		tmp = cleanLeadingZeroes(tmp);
		result = sum(result, size1 + size2, tmp, strSize(tmp));
	}
	result = cleanLeadingZeroes(result);

	printf("success\nFinal Result: %s\n", result);
	return (0);
}

/**
 * print - prints a string
 *
 * @str: the string
 * Return: nothing
 */
void print(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}

/**
 * isDigits - checks that a string is composed of only digits
 *
 * @str: the string
 * Return: 1 if it's only digits, 0 otherwise.
 */
int isDigits(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] < 48 || str[i] > 57)
			return (0);
	return (1);
}

/**
 * sum - adds 2 numbers of any size
 *
 * Description: n1 should be larger than n2
 * @n1: first number (the larger)
 * @size1: #digits in the first number
 * @n2: second number (the smaller)
 * @size2: #digits in the second number
 * Return: a pointer to a character array having the sum
 */
char *sum(char *n1, int size1, char *n2, int size2)
{
	int tmp, carry = 0;
	char *result;

	/* Input Validation */
	if (size2 > size1)
		print("Error: n2 > n1\n");

	/* Allocation */
	/* 1 for carry & 1 for null */
	result = malloc(sizeof(*result) * (size1 + 1) + 1);
	if (result == NULL)
	{
		print("Error: Failed to allocate memory while addition\n");
		return (NULL);
	}
	result[size1 + 1] = '\0';

	/* Summation */
	while (size1 > -1)
	{
		tmp = 0;
		if (size1 == 0)
			size1--;
		if (size1 > 0)
			tmp += n1[--size1] - 48;
		if (size2 > 0)
			tmp += n2[--size2] - 48;
		tmp += carry;
		if (tmp > 9)
			result[size1 + 1] = (tmp % 10) + 48;
		else
			result[size1 + 1] = tmp + 48;
		carry = tmp / 10;
	}
	printf("Sum was made :)\nResult: %s\n\n", result);
	return (result);
}

/**
 * multiply_1_many - multiplies 2 numbers (second is only of 1 digit)
 *
 * @str: string containing the first numbers' digits
 * @size: size of first
 * @c: the digit character we are multiplying by
 * Return: a pointer to a string of the multiplication
 */
char *multiply_1_many(char *str, int size, char c)
{
	char *result;
	int tmp, carry = 0;

	/* Input Validation */
	if (size < 1)
	{
		print("Error: size is less than 1\n");
		return (NULL);
	}

	/* Allocation */
	/* 1 for carry & 1 for null */
	result = malloc(sizeof(*result) * (size + 1) + 1);
	if (result == NULL)
	{
		print("Failed to allocate memory while single digit multiplication\n");
		return (NULL);
	}
	result[size + 1] = '\0';

	/* multiplication */
	c -= 48;
	while (size > -1)
	{
		tmp = 0;
		size--;
		if (size >= 0)
			tmp += (str[size] - 48) * c;
		tmp += carry;
		if (tmp > 9)
			result[size + 1] = (tmp % 10) + 48;
		else
			result[size + 1] = tmp + 48;
		carry = tmp / 10;
	}
	printf("single miltiplication was made :)\nResult: %s\n\n", result);
	return (result);
}

/**
 * cleanLeadingZeroes - removes the leading zeroes of a string
 *
 * @str: the string
 * Return: a pointer to the cleaned string
 */
char *cleanLeadingZeroes(char *str)
{
	int i, k, size = 0, leadingZeroes = 1, allZeroes = 1;
	char *result;

	/* Input Validation */
	if (str == NULL)
	{
		print("Error: cleaning NULL string\n");
		exit(1);
	}
	/* if the whole number is 0, don't clean anything */
	for (i = 0; str[i]; i++)
		if (str[i] != '0')
		{
			allZeroes = 0;
			break;
		}
	if (allZeroes)
		return (str);

	/* Cleaning leading 0s & Counting */
	for (i = 0; str[i]; i++)
	{
		/* Drop down the flag when you find a non-zero character */
		if (str[i] != '0')
			leadingZeroes = 0;
		if (leadingZeroes)
			continue;
		size++; /* This size doesn't count the leading 0s */
	}

	/* Allocation & failure check */
	result = malloc(sizeof(*result) * size + 1);
	if (result == NULL)
	{
		print("Failed to allocate memory while cleaning leading 0s\n");
		exit(1);
	}
	result[size] = '\0';

	/* build result */
	leadingZeroes = 1;
	for (i = 0, k = 0; str[i]; i++) /* i: str index, k: result index */
	{
		if (str[i] != '0')
			leadingZeroes = 0;
		if (leadingZeroes)
			continue;
		result[k++] = str[i];
	}
	printf("Cleaning leading digits was made :)\nResult: %s\n\n", result);
	return (result);
}

/**
 * concat_zeroes - concatenates 0s to the end of the string
 *
 * @str: the string
 * @zeroesToAdd: number of zeroes to concatenate at the end
 * Return: pointer to the cleaned concatenated string
 */
char *concat_zeroes(char *str, int zeroesToAdd)
{
	int i, size;
	char *result;

	/* Input Validation */
	if (zeroesToAdd < 0 || str == NULL)
	{
		print("Error: str = NULL or #zeroes to concatenate is less than 0\n");
		return (NULL);
	}

	/* Allocation & failure check */
	size = strSize(str);
	printf("size: %d\n", size);
	result = malloc(sizeof(*result) * (size + zeroesToAdd) + 1);
	if (result == NULL)
	{
		print("Failed to allocate memory while concatenating zeroes\n");
		return (NULL);
	}
	result[size + zeroesToAdd] = '\0';

	/* build result (copy str & add zeroes) */
	for (i = 0; str[i]; i++)
		result[i] = str[i];
	for (i = 0; i < zeroesToAdd; i++)
		result[i + size] = '0';
	printf("Concatenating %d 0s was made:)\nResult: %s\n\n", zeroesToAdd, result);
	return (result);
}

/**
 * strSize - numbers of chars in a string
 *
 * @str: the string
 * Return: #characters in the given string
 */
int strSize(char *str)
{
	int i, size = 0;

	if (str == NULL)
	{
		print("Error: the given string to calculate its length is NULL\n");
		return (0);
	}

	for (i = 0; str[i]; i++)
		size++;
	return (size);
}
