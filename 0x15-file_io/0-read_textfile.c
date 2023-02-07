#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) return 0;
    
    FILE *file = fopen(filename, "r");
    if (file == NULL) 
	return 0;
	
	ssize_t printout = write(STDOUT_FILENO, file, letters);
	if (write == NULL)
		return 0;
	if (letter == NULL)
		return 0;

	_putchar(printout);
	fclose(file);
	return printout;
}

