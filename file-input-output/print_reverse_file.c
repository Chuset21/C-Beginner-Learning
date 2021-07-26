#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file.txt"

int main() {
    FILE *pFile = fopen(FILENAME, "r");
    if (!pFile) {
        exit(-1);
    }

    fseek(pFile, 0, SEEK_END);
    const long length = -ftell(pFile);

    long i = 0;
    while (i-- > length) {
        fseek(pFile, i, SEEK_END);
        printf("%c", fgetc(pFile));
    }
    printf("\n");

    fclose(pFile);
    pFile = NULL;

    return 0;
}