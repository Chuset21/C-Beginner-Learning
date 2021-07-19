#include <stdio.h>

int main() {
    char str[100];
    double i;

    printf("Enter a value: ");
    scanf("%lf %s", &i, str);
    printf("\nYou entered: %lf %s\n", i, str);
    return 0;
}
