#include "main.h"

/**
 * void swap_int - function that swaps the values of two integers
 * @a: first number to swap
 * @b: second number to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
