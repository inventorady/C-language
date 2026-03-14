/*
        wap to show demo of creating a file and store data in it.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{

    FILE *AD;

    AD = fopen("u4_code","w");

    if(AD == NULL)
    {
        printf("FILE NOT FOUND ! \n");
        return 1;
    }
        fprintf(AD,"hey budy !!.\n");
        fprintf(AD," File handling in C.\n!!.\n");
  
        fclose(AD);

printf("file created successfully !!!!!\n");

return  0;

}