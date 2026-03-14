/*
    wap to show demo of pointer for accssing student information like rollno,name,sid,
    and last percenrtage
        developed by : adi
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rollno;
    char name[50];
    long long sid;
    float percentage;

int *pROLLNO = &rollno;
char *pNAME = name;
long long int *pSID = &sid;
float *pPERCENATGE = &percentage;

// ENTER DETAILS
printf("ENTER STUDENT ROLL NO :");
scanf("%d",pROLLNO);

printf("ENTER STUDENT NAME :");
scanf("%s",pNAME);

printf("ENTER STUDENT SID :");
scanf("%lld",pSID);

printf("ENTER STUDENT PERCENTGE :");
scanf("%f",pPERCENATGE);

// DISPLAY STUDENT INFORMATION
printf("ROLL NO : %d\n",*pROLLNO);
printf("NAME  : %s\n",pNAME);
printf("SID : %lld\n",*pSID);
printf("PERCENTAGE : %f\n",*pPERCENATGE);

return 0 ;

}