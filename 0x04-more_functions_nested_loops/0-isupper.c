#include "main.h"

/**
 * _isupper - checks for upper case letters
 * @c: is a character
 *
 * Description: This function tells if a character is uppercase letter.
 *
 * Return: 1 is uppercase and 0 is lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

