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
    mutableDate = (struct mutableDate) {25, 9}; // compound literals

    return 0;
}