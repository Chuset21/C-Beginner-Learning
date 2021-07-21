#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main() {
    const float rainfall[YEARS][MONTHS] = {
            {4.3f, 4.3f, 4.3f, 3.0f, 2.0f, 1.2f, 0.2f, 0.2f, 0.4f, 2.4f, 3.5f, 6.6f},
            {8.5f, 8.2f, 1.2f, 1.6f, 2.4f, 0.0f, 5.2f, 0.9f, 0.3f, 0.9f, 1.4f, 7.3f},
            {9.1f, 8.5f, 6.7f, 4.3f, 2.1f, 0.8f, 0.2f, 0.2f, 1.1f, 2.3f, 6.1f, 8.4f},
            {7.2f, 9.9f, 8.4f, 3.3f, 1.2f, 0.8f, 0.4f, 0.0f, 0.6f, 1.7f, 4.3f, 6.2f},
            {7.6f, 5.6f, 3.8f, 2.8f, 3.8f, 0.2f, 0.0f, 0.0f, 0.0f, 1.3f, 2.6f, 5.2f}
    };

    int year, month;
    float subtotal, total;

    printf(" YEAR\t\tRAINFALL  (inches)\n");

    for (year = 0, total = 0; year < YEARS; year++) {
        for (month = 0, subtotal = 0; month < MONTHS; month++) {
            subtotal += rainfall[year][month];
        }
        printf("%5d \t%15.1f\n", 2010 + year, subtotal);
        total += subtotal;
    }

    printf("\nThe yearly average is %.1f inches.\n\n"
           "MONTHLY AVERAGES:\n\n"
           " Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n", total / YEARS);

    for (month = 0; month < MONTHS; month++) {
        for (year = 0, subtotal = 0; year < YEARS; year++) {
            subtotal += rainfall[year][month];
        }
        printf("%4.1f ", subtotal / YEARS);
    }
    printf("\n");

    return 0;
}