/*
title:-Write a C program to find the square of a number using a user defined function with no arguments but with return value.
name:-ady 
*/
#include<stdio.h>
#include<stdlib.h>
int squre()
{
int squre,num;
printf("\nENTER A NUM: ");
scanf("%d",&num);
squre=num*num;
return squre;
}

int main(){
int hold;

hold=squre();
printf("\nSQURE OF NUM: %d",hold);
}
    