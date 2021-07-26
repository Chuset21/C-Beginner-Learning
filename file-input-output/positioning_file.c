#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *const pFile = fopen("file.txt", "r");

    if (!pFile) {
        exit(-1);
    }
    fseek(pFile, 0, SEEK_END);

    printf("Total size of file.txt = %ld bytes.\n", ftell(pFile));


    freopen("file.txt", "w+", pFile);

    fputs("This is Joe", pFile);

    fseek(pFile, 7, SEEK_SET);
    fputs("Hello", pFile);  // File will have "This isHello"


    freopen("file.txt", "w+", pFile);
    fpos_t position;
    fgetpos(pFile, &position);
    fputs("Hello, World!", pFile);

    fsetpos(pFile, &position);
    fputs("This will override previous content", pFile);

    fclose(pFile);

    return 0;
}