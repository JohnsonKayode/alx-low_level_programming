#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguements
 * @argv: pointer of arrays
 * Description: multiplies two arguements
 *
 * Return: 0 success;
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1 && (argc - 1) == 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
	return (0);
}
