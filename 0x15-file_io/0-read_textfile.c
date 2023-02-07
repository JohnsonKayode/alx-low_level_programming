#include "main.h"

/*
* read_textfile: reads a file and prints output
* filename: the name of file
* c: The output or printout holder
* temp: temporary place holder for letters and 
* keeps count of number of lines to be printed
* readable: Hold number of letters in file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
		exit(1);
	}
	char c;
	int readable;
	FILE *file = fopen(filename, "r");
	if (file == NULL)

	{
		return (0);
		exit(1);
	}
	size_t *temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		return (0);
		exit(1);
	}
	else
	{
		readable = read(STDIN_FILENO, file, temp);
		while (!feof(file))
		{
			c = write(STDOUT_FILENO, file, temp);
			_putchar(c);
		}
		free(temp);
	}
	fclose(file);
	return (readable);
}
