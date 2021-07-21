#include <stdio.h>

int main() {
    int minutesEntered;

    printf("Please enter the number of minutes: ");
    scanf("%d", &minutesEntered);

    const int MINUTES_IN_YEAR = 525600;
    const int years = minutesEntered / MINUTES_IN_YEAR;
    const double remainingDays = (double) (minutesEntered % MINUTES_IN_YEAR) / 1440;

    printf("%d minutes is approximately %d years and %f days\n", minutesEntered, years, remainingDays);

    return 0;
}