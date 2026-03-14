/*
WAP to maintain mobile contact list using structure where user will store 
Contact Name , Contact Number. Contact Email
developed by : adi
*/

#include <stdio.h>

struct contact {
    char name[20];
    char number[15];
    char email[30];
};

int main() {
    struct contact c[5];
    int i, n;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Number: ");
        scanf("%s", c[i].number);

        printf("Email: ");
        scanf("%s", c[i].email);
    }

    printf("\nContact List\n");
    for (i = 0; i < n; i++) {
        printf("\nName: %s", c[i].name);
        printf("\nNumber: %s", c[i].number);
        printf("\nEmail: %s\n", c[i].email);
    }

    return 0;
}
