#include "stack.h"

struct Stack* createStack(unsigned capacity) 
{ 
	Stack* stack = (struct Stack*)malloc(sizeof(Stack));
    if (!stack)
        exit(EXIT_FAILURE);
	stack->capacity = capacity; 
	stack->top = -1; 
	stack->array = (int*)malloc(stack->capacity * sizeof(int)); 
	return stack;
} 

int isFull(struct Stack* stack) 
{ 
	return stack->top == stack->capacity - 1;
} 

int isEmpty(struct Stack* stack) 
{ 
	return stack->top == -1; 
} 

void push(struct Stack* stack, int item) 
{ 
	if (isFull(stack))
		return;
	stack->array[++stack->top] = item; 
	printf("%d pushed to stack\n", item); 
} 

int pop(struct Stack* stack) 
{ 
	if (isEmpty(stack)) 
		return INT_MIN; 
	return stack->array[stack->top--]; 
} 

int peek(struct Stack* stack) 
{ 
	if (isEmpty(stack)) 
		return INT_MIN; 
	return stack->array[stack->top]; 
} 
