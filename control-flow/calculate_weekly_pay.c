#include <stdio.h>

#define PAY_RATE 12
#define OVERTIME_THRESHOLD 40
#define FIRST_TAX_THRESHOLD 300
#define TAX_RATE_300 0.15
#define SECOND_TAX_THRESHOLD 450
#define TAX_RATE_450 0.2
#define SECOND_TAX_MAX_VALUE 30

int main() {
    int hoursEntered;
    printf("Enter the amount of hours worked: ");
    scanf("%d", &hoursEntered);

    const double grossPay = hoursEntered <= OVERTIME_THRESHOLD ?
                            hoursEntered * PAY_RATE :
                            OVERTIME_THRESHOLD * PAY_RATE +
                            (hoursEntered - OVERTIME_THRESHOLD) * (PAY_RATE + PAY_RATE / 2);

    const double taxes = (grossPay > FIRST_TAX_THRESHOLD ?
            45 + (grossPay > SECOND_TAX_THRESHOLD ? SECOND_TAX_MAX_VALUE + (grossPay - SECOND_TAX_THRESHOLD) / 4 :
            (grossPay == SECOND_TAX_THRESHOLD ? SECOND_TAX_MAX_VALUE :
            (grossPay - FIRST_TAX_THRESHOLD) * TAX_RATE_450)) : grossPay *TAX_RATE_300);

    printf("Your gross pay is: %g\n"
           "Your taxes are: %g\n"
           "Your net pay is: %g\n",
           grossPay, taxes, grossPay - taxes);

    return 0;
}