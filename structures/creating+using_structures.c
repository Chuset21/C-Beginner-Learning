#include <stdio.h>

struct date {
    const int day;
    const int month;
    const int year;
};

struct mutableDate {
    int day;
    int month;
    int year;
};

int main() {
    const struct date today = {.day = 25, .month = 7, .year = 2021}; // don't name them if in order
//    today.day = 26; // If it wasn't a 'const'

    printf("Today's date is %d/%d/%.2i.\n", today.day, today.month, today.year);

    struct rGBValues { // Name could be omitted
        const unsigned char red; // 0 - 255 possible values
        const unsigned char green;
        const unsigned char blue;
    } red = {255, 0, 0};

    struct mutableDate mutableDate = {9, 25, 2015};

    // This will reset 'year' to the primitive's default value, in this case 0
    mutableDate = (struct mutableDate) {25, 9}; // compound literals


    struct mutableDate *pMutableDate = &mutableDate;

    *pMutableDate = (struct mutableDate) {25, 9, 2015}; // compound literals with pointers

    (*pMutableDate).day = 21;
    pMutableDate->day = 25; // Same thing

    printf("Mutable date = %d/%d/%.2i.\n", pMutableDate->day, pMutableDate->month, pMutableDate->year);

    struct pInts {
        int *p1;
        int *p2;
    } pointers;

    int i1 = 100, i2;
    pointers = (struct pInts) {&i1, &i2};
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

    struct pNames {
        char *first;
        char *last;
        int letters;
    };

    return 0;
}