#include <stdio.h>
#include <stdbool.h>

int main() {
    int integerVar = 89;
    printf("integerVar = %d\n", integerVar);

    float floatVar = 331.79f;
    printf("floatVar = %f\n", floatVar);

    double doubleVar = 8.44e+11;
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);  // Does not include "unnecessary" 0's

    char charVar = 'W';
    printf("charVar = %c\n", charVar);

    bool boolVar = false;
    printf("boolVar = %i\n", boolVar);

    float x = 3.9993232323f;
    printf("x = %.5f\n", x);

    return 0;
}