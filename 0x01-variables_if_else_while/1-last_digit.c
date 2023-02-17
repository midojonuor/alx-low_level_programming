#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int rem = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	rem = n % 10;

	if (rem > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	}
	else if ((rem < 6) && (rem != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, rem);
	}
	return (0);
}
