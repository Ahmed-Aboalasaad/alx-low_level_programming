#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(void *ptr)
{
    printf("%c", *(char *)ptr);
}

void print_integer(void *ptr)
{
    printf("%d", *(int *)ptr);
}

void print_float(void *ptr)
{
    printf("%f", *(float *)ptr);
}

void print_string(void *ptr)
{
    printf("%s", (char *)ptr);
}

typedef struct printable
{
    char type;
    void (*f)(void *);
}printable;

void (*get_printer(char type))(void *ptr)
{
    int i = 0;
    printable types[] = {
        {'c', print_char},
        {'i', print_integer},
        {'f', print_float},
        {'s', print_string},
        {'\0', NULL}
    };

    while (types[i].type != '\0')
    {
        if (types[i].type == type)
            return (types[i].f);
        i++;
    }
    return (NULL);
}

/**
 * print_all - prints anything
 * no use of for, goto, else, do while
 * allowed: 2 if, 2 while loops, 9 variables
 * @format: a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char *const format, ...)
{
    int i;
    void (*printer)(void *ptr);

    va_list args;
    va_start(args, format);
    /* parse the format */    
    /*while (format[i])
    {
        printer = get_printer(format[i]);
        if (printer != NULL)
            printer(va_arg(args, ));
        i++;
    }*/
    printf("%c\n", va_arg(args, int));
    (void) printer;
    (void) format;
    (void) i;
    va_end(args);
}


