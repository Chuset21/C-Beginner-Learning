#include <stdio.h>

int main() {
    enum Company {
        GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT
    };

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("The value of xerox is: %d\nThe value of google is: %d\nThe value of ebay is: %d\n", xerox, google, ebay);

    return 0;
}