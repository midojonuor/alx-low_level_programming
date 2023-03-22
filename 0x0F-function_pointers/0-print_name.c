#include "main.h"



/**
 * print_name - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @name: The width of the 2-dimensional array.
 * @f: The height of the 2-dimensional array.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}