#include "main.h"

/**
 * more_numbers - this prints numbers from 0 to 14
 *
 * Description: this program prints numbers
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j <= 9)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
