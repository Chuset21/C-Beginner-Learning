#include <stdio.h>
#include <stdlib.h>

int main() {
    // Reading each character
    FILE *pFile = fopen("file.txt", "r");

    if (!pFile) {
        exit(-1);
    }

    int c;
    while ((c = fgetc(pFile)) != EOF) {
        printf("%c", c);
    }
    printf("\n");

    // Reading each line
    rewind(pFile);
    const int n = 60;
    char str[n];

    while (fgets(str, n, pFile)) {
        printf("%s", str);
    }

    fclose(pFile);
    pFile = NULL;

    return 0;
}