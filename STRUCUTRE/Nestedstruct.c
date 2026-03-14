/*wap in c to demonstrate nested structure
developed by : adi
*/
struct Address {
    char city[50];
    int pincode;
};

struct Employee {
    char name[100];
    int empId;
    struct Address homeAddress;
};
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()  {
    struct Employee emp;

    printf("Enter Employee Name :\n");
    scanf("%s",emp.name);

    printf("Enter Employee ID : \n");
    scanf("%d",&emp.empId);

    printf("Enter City : \n");
    scanf("%s",emp.homeAddress.city);

    printf("Enter Pincode : \n");
    scanf("%d",&emp.homeAddress.pincode);
    
    //Display
    printf("\nEmployee Display\n");
    printf("Name : %s\n",emp.name);
    printf("Employee ID : %d\n",emp.empId);
    printf("City : %s\n",emp.homeAddress.city);
    printf("Pincode : %d\n",emp.homeAddress.pincode);

    return 0;
}

