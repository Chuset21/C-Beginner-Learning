#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of Arguments: %d\nArgument 1 is the program name: %s\nArgument 2 is the command line argument: %s",
           argc, argv[0], argv[1]);

    return 0;
}