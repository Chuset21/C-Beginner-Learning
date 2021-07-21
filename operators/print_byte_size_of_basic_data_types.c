#include <stdio.h>

int main() {
    printf("Byte size of 'int': %lu\n"
           "Byte size of 'char': %lu\n"
           "Byte size of 'long': %lu\n"
           "Byte size of 'long long': %lu\n"
           "Byte size of 'double': %lu\n"
           "Byte size of 'long double': %lu\n",
           sizeof(int), sizeof(char), sizeof(long), sizeof(long long), sizeof(double), sizeof(long double));

    return 0;
}