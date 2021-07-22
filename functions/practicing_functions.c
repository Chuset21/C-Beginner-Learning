#include <stdio.h>

int gcd(int u, int v) {
    int temp;

    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}

float absoluteValue(const float value) {
    return value < 0 ? -value : value;
}

float squareRoot(const float value) {
    const float epsilon = 0.00001f;
    float guess = 1.0f;

    float result;
    if (value < 0) {
        printf("Negative argument to squareRoot().\n");
        result = -1.0f;
    } else {
        while (absoluteValue(guess * guess - value) >= epsilon) {
            guess = (value / guess + guess) / 2;
        }
        result = guess;
    }
    return result;
}

int main() {
    printf("The gcd of 150 and 35 is %d\n"
           "The gcd of 1026 and 405 is %d\n"
           "The gcd of 83 and 240 is %d\n",
           gcd(150, 35), gcd(1026, 405), gcd(83, 240));

    const float f1 = -15.5f, f2 = 20.1f;
    const int i1 = -716;
    printf("The absolute value of %g is %g\n"
           "The absolute value of %g is %g\n"
           "The absolute value of %d is %g\n",
           f1, absoluteValue(f1), f2, absoluteValue(f2), i1, absoluteValue((float) i1));

    const float f3 = 25, f4 = 16;
    printf("The square root of %g is %g\n"
           "The square root of %g is %g\n"
           "The square root of %g is %g\n",
           f3, squareRoot(f3), f4, squareRoot(f4), f2, squareRoot(f2));

    return 0;
}