#include <stdio.h>
#include <stdlib.h>

int main() {
    // Writing each character
    FILE *const pFile = fopen("file.txt", "w+");

    if (!pFile) {
        exit(-1);
    }

    for (int ch = 33; ch <= 100; ch++) {
        fputc(ch, pFile);
    }

    // Writing strings
    freopen("file.txt", "w+", pFile);

    fputs("This is John\n", pFile);
    fputs("Hello, World", pFile);


    freopen("file.txt", "w+", pFile);

    fprintf(pFile, "%s %d", "Number =", 21);

    fclose(pFile);

    return 0;
}