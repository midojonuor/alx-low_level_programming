#include "main.h"

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char strArr[] = "_putchar";

	for (i = 0; i < ((int) sizeof(strArr)); ++i)
	{
		_putchar(strArr[i]);
	}
	_putchar('\n');
	return (0);
