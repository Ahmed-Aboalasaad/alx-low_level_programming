#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a given function on each element of an array
 * 
 * @array: the array
 * @size: its size
 * @action: the function pointer
 * Return: norhing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array == NULL || action == NULL)
        return;
    for (i = 0; i < size; i++)
        action(array[i]);
}
