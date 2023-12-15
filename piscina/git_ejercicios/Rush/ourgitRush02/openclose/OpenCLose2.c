#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX_LINE_LENGTH 256

char* find_line_with_text(const char* filename, const char* search_text) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return NULL;
    }

    char* line = (char*)malloc(MAX_LINE_LENGTH * sizeof(char));
    ssize_t bytes_read;
    while ((bytes_read = read(fd, line, MAX_LINE_LENGTH)) > 0) {
        if (strstr(line, search_text) != NULL) {
            close(fd);
            return line;
        }
    }

    close(fd);
    free(line);
    return NULL;
}

int main() {
    const char* filename = "archivo.dict";
    const char* search_text = "ejemplo";

    char* line = find_line_with_text(filename, search_text);
    if (line != NULL) {
        printf("Line with search text: %s\n", line);
        free(line);
    } else {
        printf("Search text not found in the file\n");
    }

    return 0;
}
