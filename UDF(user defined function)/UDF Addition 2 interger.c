/*
title:-Write a C program to define and call a user defined function to find the sum of two integers
name:-Ady
*/
#include<stdio.h>
#include<stdlib.h>

int addtwo(int a,int b);

int main()
{
    int a,b,sum;
    system("cls");

    printf("\n=====================================");

    printf("\n Enter the two number: ");
    scanf("%d %d",&a,&b);
    sum=addtwo(a,b);
    printf("\n Sum of two number= %d",sum);

}

int addtwo(int a,int b)
{
    int result;
    result=a+b;
    return result;

    printf("\n=====================================");
 
}



