#include "main.h"

/**
 * print_most_numbers - checkes for the numbers to print
 *
 * Description: uses a loop to check through and print except 2 amd 4
 *
 * Return: void, putchar will print number
 */
int print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
