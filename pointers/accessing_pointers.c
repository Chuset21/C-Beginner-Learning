#include <stdio.h>

int main() {
    int number = 15;
    const int *pNumber = &number;
    const int result = *pNumber + 5;

    printf("result = %d\n", result);
    printf("Value that pNumber points to = %d\n", *pNumber);
    printf("pNumber = %p\n", pNumber);
    printf("number's address = %p\n", &number);
    printf("pNumber's address = %p\n", &pNumber);
    printf("pNumber's byte size = %lu\n", sizeof pNumber);

    return 0;
}