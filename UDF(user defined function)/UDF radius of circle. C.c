/*
title:-Write a C program to calculate and display the area of a circle using a user defined function with arguments but no return value.
name:-ady
*/
#include<stdio.h>
#include<stdlib.h>
void area(float r);

int main()
{
    float r;
    system("cls");
    printf("\n enter the radious of circle: ");
    scanf("%f",&r);
    area(r);
    return 0;
}
void area(float r)
{
    float pie=3.14,area;
    area=pie*r*r;
    printf("\n area of circle=%.2f",area);
}