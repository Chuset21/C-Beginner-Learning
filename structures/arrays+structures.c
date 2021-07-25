struct date {
    const int day;
    const int month;
    const int year;
};

struct month {
    short numberOfDays;
    char name[4];   // Three-character abbreviation fpr month name
};

int main() {
    struct date myDates[5] = { // 4th element not initialised
            {12, 10, 1975},
            {30, 12, 1990},
            {28, 4, 2007},
            [4] = {1, 7, 1450}
    };

    struct month january = {31, "Jan"};
    struct month months[12] = {january};

    return 0;
}
