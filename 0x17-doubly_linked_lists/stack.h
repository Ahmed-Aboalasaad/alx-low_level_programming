#ifndef STACK_H
#define STACK_H
#include <limits.h> 
#include <stdio.h>
#include <stdlib.h>

/**
 * struct Stack - stack
 *
 * @top: the index top
 * @capacity: #elements in the stack
 * @array: the array holding the values (The stack itself)
 *
 * Description: an array implementation of a stack
*/
typedef struct Stack { 
	int top; 
	unsigned capacity; 
	int* array; 
} Stack;

#endif
