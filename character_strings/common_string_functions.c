#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    const char myString[] = "Hello";

    char temp[10];

    strncpy(temp, myString, sizeof(temp) - 1);

    printf("The length of \"%s\" is %lu.\n\n", myString, strlen(myString));

    // strncat()
    char src[50];
    strncpy(src, "This is the source", sizeof(src) - 1);
    char input[80];

    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    printf("%s concatenated with %s is:\n", src, input);
    printf("%s\n\n", strncat(src, input, sizeof(src) - 1));

    // strcmp() works like compare in Java
    // strncmp() is used to limit the amount of characters compared


    // More advanced functions
    // strchr()
    const char string[] = "The quick brown fox";
    const char ch = 'q';
    char *pGotChar;
    pGotChar = strchr(string, ch);
    printf("%s\n", pGotChar);

    // strstr()
    const char text[] = "Every dog has his day";
    const char word[] = "dog";
    char *pFound;
    pFound = strstr(text, word);
    printf("%s\n", pFound);

    // strtok()
    char str[] = "Hello how are you - my name is - Jason";
    const char s[] = "-";
    char *token;

    token = strtok(str, s);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }


    // Converting Strings
    const char original[] = "Hello World!!!\nThis is CRAZY!";
    printf("\nOriginal String:\n%s\n", original);

    char lower[sizeof original];
    for (int i = 0; (lower[i] = tolower(original[i])); i++);
    printf("\nLowercase String:\n%s\n", lower);

    char upper[sizeof original];
    for (int i = 0; (upper[i] = toupper(original[i])); i++);
    printf("\nUppercase String:\n%s\n", upper);

    return 0;
}