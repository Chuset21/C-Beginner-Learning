#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char name[25][50], temp[25];

    printf("\nPrint string in reverse order:\n"
           "----------------------------------------------------------\n"
           "Input the string: ");
    scanf("%s", str);

    const unsigned int length = strlen(str);

    printf("The reversed string is:\n");

    for (int i = (int) length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n----------------------------------------------------------\n\n"
           "Sorts the strings of an array using bubble sort:\n"
           "---------------------------------------------------------\n"
           "Input number of strings: ");

    unsigned int n;
    scanf("%d", &n);

    for (unsigned int i = 0; i < n; i++) {
        printf("Input string %d:\n", i + 1);
        scanf("%s", name[i]);
    }

    for (unsigned int i = 1; i <= n; i++) {
        const unsigned int limit = n - i;
        for (unsigned int j = 0; j <= limit; j++) {
            if (strcmp(name[j], name[j + 1]) > 0) {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j + 1], sizeof(name[j]) - 1);
                strncpy(name[j + 1], temp, sizeof(name[j + 1]) - 1);
            }
        }
    }

    printf("The strings appear after sorting:");

    for (unsigned int i = 0; i <= n; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}