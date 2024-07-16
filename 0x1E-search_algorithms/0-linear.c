#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value)
{
    int i;

    /* Input Validation */
    if (!array)
        return (-1);
    
    /* Linear Seach */
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
