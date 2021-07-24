#include <stdlib.h>

int main() {
    int *pNum = (int *) malloc(25 * sizeof(int));   // malloc() returns void pointer -> (void *)
    if (!pNum) { // Checking if it's NULL -> (pNum == NULL)
        exit(1);
    }
    free(pNum);
    pNum = NULL;

    int *pNumber = (int *) calloc(30, sizeof(int));
    if (!pNumber) {
        exit(1);
    }

    pNumber = (int *) realloc(pNumber, 40 * sizeof(int));
    if (!pNumber) {
        exit(1);
    }
    free(pNumber);

    return 0;
}