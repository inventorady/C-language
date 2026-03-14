/*
    wap to take element and display using pointer.
    also display sum of element in array

*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[5],*p,i,n,*s,sum=0;
    system("cls");
    p = a;
    s = a;
    printf("enter value of n:");
    scanf("%d",&n);

    for(i =0; i<n; i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",s+i);
        sum = sum + *(s+i);

    }

    for(i = 0 ; i < n ; i ++)
    {
         printf("\n a[%d]=",i+1);
         scanf("%d",p+i);  

    }
    printf("\n SUM IS %d",sum);

} 