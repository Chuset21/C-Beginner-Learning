#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Enter limit of the text: ");
    scanf("%d", &size);

    char *text = (char *) malloc((size + 1) * sizeof(char));
    if (!text) {
        exit(1);
    }

    printf("Enter some text: ");
    scanf(" "); // Reads in next character but pauses
    gets(text); // Reads in text, including spaces

    printf("Inputted text is: %s\n", text);

    free(text);
    text = NULL;

    return 0;
}