/*
wap to show demo of chain of pointer(with float datatype)
developed by : adi

*/

#include <stdio.h>

int main(){

   float a = 10.25;;

   float *x = &a;
   float **y = &x;
   float ***z = &y;

   printf("a: %f\n", a);

  
   *x = 11.25;
   printf("a: %f\n", *x);

   **y = 12.25;
   printf("a: %f\n", **y);

  
   ***z = 13.25;
   printf("a: %f\n", ***z);

   return 0;
}