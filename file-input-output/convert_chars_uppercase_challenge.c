#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "file.txt"
#define TEMP "temp.txt"

int main() {
    FILE *pFile = fopen(FILENAME, "r");
    FILE *temp = fopen(TEMP, "w");
    if (!pFile || !temp) {
        exit(-1);
    }

    int ch;
    while ((ch = fgetc(pFile)) != EOF) {
        fputc(toupper(ch), temp);
    }

    fclose(pFile);
    fclose(temp);

    rename(TEMP, FILENAME);

    pFile = fopen(FILENAME, "r");
    if (!pFile) {
        exit(-1);
    }

    const int n = 60;
    char str[n];

    while (fgets(str, n, pFile)) {
        printf("%s", str);
    }

    fclose(pFile);
    pFile = NULL;
    temp = NULL;

    return 0;
}