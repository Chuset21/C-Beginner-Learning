#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOWER_BOUND 0
#define UPPER_BOUND 20
#define STARTING_NUMBER_OF_TRIES 5

int main() {
    printf("This is a guessing game.\n"
           "I have chosen a number between %d and %d, which you must guess.\n\n",
           LOWER_BOUND, UPPER_BOUND);

    srand(time(NULL));
    const int numberToGuess = (rand() % UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;

    int currentGuess;

    for (int numberOfRemainingTries = STARTING_NUMBER_OF_TRIES; numberOfRemainingTries > 0; numberOfRemainingTries--) {
        printf("You have %d tr%s left.\nEnter a guess: ",
               numberOfRemainingTries, numberOfRemainingTries == 1 ? "y" : "ies");
        scanf("%d", &currentGuess);

        if (currentGuess < LOWER_BOUND || currentGuess > UPPER_BOUND) {
            numberOfRemainingTries++;
            printf("Please enter a number between %d and %d.", LOWER_BOUND, UPPER_BOUND);
        } else if (numberToGuess < currentGuess) {
            printf("Sorry %d is wrong. My number is less than that.", currentGuess);
        } else if (numberToGuess > currentGuess) {
            printf("Sorry %d is wrong. My number is more than that.", currentGuess);
        } else {
            break;
        }
        printf("\n\n");
    }

    if (numberToGuess == currentGuess) {
        printf("\nCongratulations. You guessed it!\n");
    } else {
        printf("Sorry, you ran out of guesses and lost.\n"
               "The number was %d.\n",
               numberToGuess);
    }

    return 0;
}