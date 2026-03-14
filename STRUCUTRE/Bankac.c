/*
 WAP to store bank account details like Account NO, 
Account Name, Account Type, Account Balance,using structure.
developed by : adi
*/

#include<stdio.h>
#include<conio.h>
struct bank {
    int accno;
    char name[20];
    char type[10];
    float balance;
};

int main()
 {
    struct bank b[5];
    int i, n;

    printf("Enter number of accounts: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of account %d\n", i + 1);

        printf("Account Number: ");
        scanf("%d", &b[i].accno);

        printf("Account Name: ");
        scanf("%s", b[i].name);

        printf("Account Type: ");
        scanf("%s", b[i].type);

        printf("Account Balance: ");
        scanf("%f", &b[i].balance);
    }

    printf("\nAccount Details\n");
    for (i = 0; i < n; i++) {
        printf("\nAccount %d\n", i + 1);
        printf("Acc No: %d\n", b[i].accno);
        printf("Name: %s\n", b[i].name);
        printf("Type: %s\n", b[i].type);
        printf("Balance: %.2f\n", b[i].balance);
    }

    return 0;
}
