#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks last digit
 *
 * Return: zero
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	} else if (1 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	} else if (1 < 6 && 1 != 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	return (0);
}
