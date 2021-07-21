#include <stdio.h>
#include <stdbool.h>

int main() {
    int primes[50] = {2, 3};
    int primeIndex = 2;

    bool isPrime;

    for (int i = 5; i <= 100; i += 2) {
        isPrime = true;
        for (int j = 1; isPrime && i / primes[j] >= primes[j]; j++) {
            if (i % primes[j] == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            primes[primeIndex++] = i;
        }
    }

//    const int limit = sizeof primes / sizeof(int); // limit in loops
    int spaceLimit = primeIndex - 1;
    for (int i = 0; i < primeIndex; i++) {
        printf("%d%s", primes[i], i != spaceLimit ? ", " : "\n");
    }

    return 0;
}