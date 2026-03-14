/*
WAP to simulate library book record management using structure. where you will 
store information of Books
developed  byy : adi
*/
#include <stdio.h>
#include <string.h> 
//price
//pages
//publisher

struct Book {
    char title[100];
    char author[50];
    float price;
};
int main() {
    struct Book books[3];

    for(int i = 0; i < 3; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author); 
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("\n");
    }

    // Finding the most expensive and lowest priced books
    struct Book maxPriceBook = books[0];
    struct Book minPriceBook = books[0];

    for(int i = 1; i < 3; i++) {
        if(books[i].price > maxPriceBook.price) {
            maxPriceBook = books[i];
        }
        if(books[i].price < minPriceBook.price) {
            minPriceBook = books[i];
        }
    }

    // Displaying the most expensive book details
    printf("Most Expensive Book:\n");
    printf("Title: %s\n", maxPriceBook.title);
    printf("Author: %s\n", maxPriceBook.author);
    printf("Price: %.2f\n\n", maxPriceBook.price);

    // Displaying the lowest priced book details
    printf("Lowest Priced Book:\n");
    printf("Title: %s\n", minPriceBook.title);
    printf("Author: %s\n", minPriceBook.author);
    printf("Price: %.2f\n", minPriceBook.price);

    return 0;
}   