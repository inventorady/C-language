/*
wap in c to demonstrate nested structure
developed by : adi
*/
struct Address
{
    char city[50];
    int pincode;
};

struct Student 
{
    char name[100];
    int sid;
    struct Address homeAddress;
    float sper;
};
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() 
 {
    struct Student std;

    printf("Enter Student Name :");
    scanf("%s",std.name);

    printf("Enter Student SID : ");
    scanf("%d",&std.sid);

    printf("Enter Student City :");
    scanf("%s",std.homeAddress.city);

    printf("Enter Area Pincode :");
    scanf("%d",&std.homeAddress.pincode);

    printf("Enter Student Percentage :");
    scanf("%f",&std.sper);
    
    //Display
    printf("\n Student Display\n");
    printf("Name : %s\n",std.name);
    printf("Student ID : %d\n",std.sid);
    printf("City : %s\n",std.homeAddress.city);
    printf("Pincode : %d\n",std.homeAddress.pincode);
    printf("Percentage : %f\n",std.sper);

    return 0;
}