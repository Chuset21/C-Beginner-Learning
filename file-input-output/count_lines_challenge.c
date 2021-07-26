#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file.txt"

int main() {
    FILE *pFile = fopen(FILENAME, "r");
    if (!pFile) {
        exit(-1);
    }

    int linesCount = 1;

    int ch;
    while ((ch = fgetc(pFile)) != EOF) {
        if (ch == '\n') {
            linesCount++;
        }
    }

    fclose(pFile);
    pFile = NULL;

    printf("Number of lines in \"%s\": %d", FILENAME, linesCount);

    return 0;
}