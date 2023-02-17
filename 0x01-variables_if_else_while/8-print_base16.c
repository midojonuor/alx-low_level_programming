#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int iter = 0;

	for (iter = 0; iter < 16; ++iter)
	{
		if (iter > 9)
		{
			putchar('a' + iter - 10);
		}
		else
		{
			putchar('0' + iter);
		}
	}
	putchar('\n');
	return (0);
}
