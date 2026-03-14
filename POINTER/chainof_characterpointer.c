/*
    wap to show demo of chain of character pointer
    developed by : adi

*/

#include <stdio.h>

int main(){

   char *a = "Hello👋!!!!";

   char **x = &a;
   char ***y = &x;
   char ****z = &y;

   printf("a: %s\n", a);
   printf("a: %s\n", *x);
   printf("a: %s\n", **y);
   printf("a: %s\n", ***z);

   return 0;
}