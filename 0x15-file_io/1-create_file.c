#include "main.h"

int create_file(const char *filename, char *text_content) {
    int fileDescriptor;
    mode_t filePermissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}
	fileDescriptor = open(filename, O_CREAT | O_TRUNC | O_WRONLY, filePermissions);
	if (fileDescriptor == -1)
	{
		return (-1);

    if (text_content != NULL) {
        if (write(fileDescriptor, text_content, strlen(text_content)) == -1) {
            return (-1);
        }
    }

    if (close(fileDescriptor) == -1)
		return (-1);
    return (1);
}

