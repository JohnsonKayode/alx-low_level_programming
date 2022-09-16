#include "main.h"


/**
 * print_square -prints square of n size
 * @size: size of square
 *
 * Return: void.
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		if (i == size)
		{
			break;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
