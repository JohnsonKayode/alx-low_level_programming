#include "main.h"

/**
 * string_toupper - convers a string from lower to upper case
 * @a: pointer to string
 *
 * Return: return a character
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
