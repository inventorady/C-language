/*
    wap to show demo of chain of pootnter
    developed by : adi

*/

#include <stdio.h>

int main(){

   int a = 100;

   int *x = &a;
   int **y = &x;
   int ***z = &y;

   printf("a: %d\n", a);

   printf("a: %d\n", *x);   
   printf("a: %d\n", **y);  
   printf("a: %d\n", ***z);
   return 0;
}