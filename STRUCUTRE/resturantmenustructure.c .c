#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct  menu
{
    int fno;
    char name[50];
    float price;
    char dish;
}m[n];   

int main()
{
int i,a,n;

printf("Enter Number Of Food Item :-");
scanf("%d",&n);

for ( i = 0; i < n; i++)
{
    printf("\n Enter Details Of Food Item %d\n",i+1);
    printf("Enter Your Best Dishes Either Punjabi Or Gujrati:-");
    scanf("%s",&m[i].dish);
    printf("Enter Food Name :-");
    scanf("%s",&m[i].name);
    printf("Enter Food Number :-");
    scanf("%d",&m[i].fno);
    printf("Enter Food Price :-");
    scanf("%f",&m[i].price);
}

printf("<=====Menu Details=====>");
for ( i = 0; i < n; i++)
{
    printf("Menu %d\n",i+1);
    printf("Dish :-%s\n",m[i].dish);
    printf("Food Name :-%s\n",m[i].name);
    printf("Food No :-%d",m[i].fno);
    printf("Food Price :-%f",m[i].price);
}
return 0;
}