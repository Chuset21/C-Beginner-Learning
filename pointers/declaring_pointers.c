#include <stddef.h>

int main() {
    /*
     * The space between the * and the pointer name is optional
     * Programmers use the space in declaration and omit it when de-referencing a variable
     */
    int * pInt = NULL;
    char * pChar = NULL;
    float * pFloat = NULL;

    // Address of operator &
    int number = 99;
    int * pNumber = &number;

    return 0;
}