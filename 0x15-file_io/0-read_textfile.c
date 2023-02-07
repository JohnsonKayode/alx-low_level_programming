
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) return 0;
    
    FILE *file = fopen(filename, "r");
    if (file == NULL) return 0;
    
    char *buffer = (char *) malloc(sizeof(char) * letters);
    if (buffer == NULL) return 0;
    
    size_t read_bytes = fread(buffer, sizeof(char), letters, file);
    if (read_bytes < letters) {
        free(buffer);
        fclose(file);
        return 0;
    }
    
    ssize_t written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
    if (written_bytes < read_bytes) {
        free(buffer);
        fclose(file);
        return 0;
    }
    
    free(buffer);
    fclose(file);
    return written_bytes;
}

