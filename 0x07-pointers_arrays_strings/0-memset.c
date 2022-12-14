#include "main.h"

/**
 * _memset - this fills a memory area with n bytes of a constant byte
 * @b: a char
 * @s: pointer to a memory area
 * @n: int
 *
 * Return: a char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
