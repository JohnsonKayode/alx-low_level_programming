#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t readable, written;
	char buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == NULL)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}
	readable = read(file, buffer, letters);
	if (readable == NULL)
	{
		free(buffer);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, readable);
	free(buffer);
	if (writter != readable)
	{
		return (0);
	}
	return (readable);

