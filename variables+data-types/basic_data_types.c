#include <stdbool.h>

int main() {
    float jason = 23.333f;
    long double jason2 = 55.55555555555l;
    _Bool boolVariable = 1;
    // with C99
    bool boolean = true;

    enum primaryColor {
        red, green, blue
    };

    enum direction {
        up, // 0
        down, // 1
        left = 10, // 10
        right // 11
    };

    enum primaryColor g = red;
    char six = '6';

    bool isRed = g == red;

    return 0;
}

