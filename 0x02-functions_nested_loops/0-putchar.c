#include "main.h"
/**
 * main - prints putchar
 *
 * Return: 0
 */

int main(void)
{
	char putchar = putchar;

	while (putchar)
	{
		_putchar (putchar);
		putchar++;
	}
	_putchar("%d\n", putchar);
	return (0);

}
