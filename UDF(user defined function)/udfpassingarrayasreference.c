/*
    wap to demo of udf where will be able to pass array as reference to the function and display 
    the elements inside the function
*/
#include <stdio.h>
#include <stdlib.h> 
void displayArray(int arr[], int size)
{
    printf("\n Elements of the array are: \n");
    for(int i = 0; i< size; i++)
    {
        printf("element %d: %d\n",i+1, arr[i]);
    }
}
int main()
{
    int arr[5];
    printf("enter 5 element for arr1:\n");
    for(int i = 0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    displayArray(arr, 5);
    arr[0] = 1111;
    arr[1] = 2222;
    arr[2] = 3333;
    arr[3] = 4444;
    arr[4] = 5555;
    printf("\n array elements in main() after function call:\n");
    for(int i = 0; i<5; i++)
    {
        printf("element %d: %d\n",i+1, arr[i]);
    }
    return 0;
}