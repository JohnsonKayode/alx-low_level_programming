#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * description: The code prints letters
 *
 * Return: zero
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{	putchar(ch);
		putchar('\n');
	}
		return (0);
}
