/*
    wap to show demo of creating a file and store data and array in it.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *AD;
    int arr[5], i;

    printf("ENTER ANY ELEMEENTS :"); 
    for (i = 0; i < 5; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    AD = fopen("msc12.txt", "w");
    if (AD == NULL)
    {
        printf("FILE NOT FOUND !!!!\n");
        return 1;
    }
    else
    {
        fprintf(AD, "HELLO BUDY !🙋‍♂️ \n");
        fprintf(AD, "STORED ELEMENTS :\n");
        for (i = 0; i < 5; i++)
        {
            fprintf(AD, "%d\n", &arr[i]);
        }
    }
    fclose(AD);
    printf("DATA STORED SUCCESFULLYC 👌");
}
