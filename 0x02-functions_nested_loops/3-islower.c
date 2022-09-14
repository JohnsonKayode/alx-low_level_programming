#include "main.h"

/**
 * islower - checks for lowercase characters.
 *
 * @c: character to be checked
 * Return: Always 0.
 */

int islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);

}
