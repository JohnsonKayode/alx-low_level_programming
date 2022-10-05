#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguements
 * @argv: pointer of arrays
 * Description: prints number of arguements
 *
 * Return: 0 success;
 */

int main(int argc, char *argv[])
{
	int i;
	char *s = argv[0];

	s[0] = 'H';
	i = argc;
	i -= 1;
	printf("%d\n", i);
	return (0);
}
