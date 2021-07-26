#include <stdio.h>
#include <stdlib.h>

typedef struct item {
    char *itemName;
    int qty;
    float price;
    float amount;
} item;

void readItem(item *const i) {
    printf("Enter product name: ");
    scanf("%s", i->itemName);

    printf("Enter price: ");
    scanf("%f", &i->price);

    printf("Enter quantity: ");
    scanf("%d", &i->qty);

    i->amount = (float) i->qty * i->price;
}

void printItem(const item *const i) {
    printf("\nName: %s\n"
           "Price: %.2f\n"
           "Quantity: %d\n"
           "Total Amount: %.2f\n",
           i->itemName, i->price, i->qty, i->amount);
}

int main() {
    item itm;
    item *const pItem = &itm;

    pItem->itemName = (char *) calloc(30, sizeof(char));

    if (!pItem->itemName) {
        exit(-1);
    }

    // read item
    readItem(pItem);

    // print item
    printItem(pItem);

    free(pItem->itemName);

    return 0;
}