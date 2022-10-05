#include <stdio.h>


/**
 * main - entry point
 * @argc: number of arguements
 * @argv: pointer of array
 *
 * Return: 0 success;
 */

int main(int argc, char *argv[])
{
	int i = argc;

	i += 1;
	printf("%s\n", argv[0]);
	return (0);
}
