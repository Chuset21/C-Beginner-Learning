#include <stdio.h>

int main() {
    double width = 3.4;
    double height = 5.13;

    printf("Width is: %g\nHeight is: %g\nPerimeter: %g\nArea: %g\n",
           width, height, 2 *  (height + width), width * height);

    return 0;
}