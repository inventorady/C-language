/*
WAP to store product details and calculate total bill in a Grocery Store using Structure
develoed by : adi
*/

#include <stdio.h>

struct product {
    char name[20];
    int qty;
    float price;
};

int main() {
    struct product p[5];
    int i, n;
    float total = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nProduct %d\n", i + 1);

        printf("Product Name: ");
        scanf("%s", p[i].name);

        printf("Quantity: ");
        scanf("%d", &p[i].qty);

        printf("Price: ");
        scanf("%f", &p[i].price);

        total = total + (p[i].qty * p[i].price);
    }

    printf("\nGrocery Bill\n");
    for (i = 0; i < n; i++) {
        printf("\n%s  %d  %.2f", p[i].name, p[i].qty, p[i].price);
    }

    printf("\n\nTotal Bill = %.2f", total);



    return 0;
}

