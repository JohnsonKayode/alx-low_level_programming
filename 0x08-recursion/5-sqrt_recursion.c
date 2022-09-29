#include "main.h"
/**
 * root - assists the sqrt function to find the natural root
 * @n: int of square
 * @i: the int root
 *
 * Return: int
 */

int root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (root(n, ++i));
	return (-1);
}

/**
 * _sqrt_recursion - gets the natural root of a squarenumber
 * @n: integer
 * Return: an int
 */

int _sqrt_recursion(int n)
{
	return (root(n, 0));
}
