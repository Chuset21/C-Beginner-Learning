#include <stdio.h>

#define NUMBER_OF_ELEMS(x)  (sizeof(x) / sizeof(*x))

int arraySum(const int *array /*same as int array[]*/, const size_t size) {
    int sum = 0;
    const int *const pArrayEnd = array + size;

    while (array < pArrayEnd) {
        sum += *array++;
    }

    return sum;
}

int main() {
    int values[100];

    int *pValues = values;
    /*
     * The address operator is not used
     * The C compiler treats the appearance of an array name without a subscript as a pointer to the array
     * Specifying values without a subscript has the effect of producing a pointer to the first element of the array
     */
    pValues = &values[0];   // Same thing

    *(pValues + 10) = 27;    // values[10] = 27;

    pValues++;
    pValues--;

    int numbers[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    printf("The sum is %d.\n", arraySum(numbers, NUMBER_OF_ELEMS(numbers)));

    return 0;
}