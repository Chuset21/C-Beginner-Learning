#include <stdio.h>
#include <string.h>

int main() {
    const char myString[] = "Hello";

    char temp[10];

    strncpy(temp, myString, sizeof(temp) - 1);

    printf("The length of \"%s\" is %lu.\n\n", myString, strlen(myString));

    // strncat()
    char src[50];
    strncpy(src, "This is the source ", sizeof(src) - 1);
    char input[80];

    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    printf("%s concatenated with %s is:\n", src, input);
    printf("%s", strncat(src, input, sizeof(src) - 1));

    // strcmp() works like compare in Java
    // strncmp() is used to limit the amount of characters compared

    return 0;
}