#include "main.h"
/**
 * main - prints putchar
 *
 * Return: 0
 */

int main(void)
{
	char putchar = _putchar;
	while (putchar)
	{
		_putchar (putchar);
		putchar++;
	}
	_putchar('\n');
	return (0);

}
