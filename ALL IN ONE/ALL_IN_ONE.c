/*
in including:

    fibonnaci   factorial   swapping(pointer)    maximum     addition    array to pointer    strucuture

    nested structure    sum of array(pointer)   file creation & stored array    calloc  palindrome

    pointer basic   sum of n number(recursion)  strucutre pointer


*/

/*
wap to show demo of fibonnaci series

#include <stdio.h>
#include <stdlib.h>
int fibonnaci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonnaci(n - 1) + fibonnaci(n - 2);
    }
}
int main()
{
    int m;
    printf("ENTER THE DIGIT :");
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        printf("%d", fibonnaci(i));
    }

    return 0;
}
*/

/*
    wap to show demo of factorial using udf


#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int m;

    printf("ENTER THE DIGIT :");
    scanf("%d", &m);

    printf("FACTORAL OF %d = %d", fact(m));
    return 0;
}
*/

/*
    wap to show demo of swapping 2 number using pointer

#include <stdio.h>
#include <stdlib.h>
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int m, n;

    printf("ENTER FIRST DIGIT :");
    scanf("%d", &m);

    printf("ENTER SECOND DIGIT :");
    scanf("%d", &n);

    printf("\n***** BEFORE SWAPPING *****\n");
    printf("m = %d , n = %d", m, n);

    swap(&m, &n);

    printf("\n***** AFTER SWAPPING *****\n");
    printf("m = %d , n = %d", m, n);

    return 0;
}
*/

/*
    wap to show demo of addition using udf

#include <stdio.h>
#include <stdlib.h>
int addition(int a, int b)
{
    return a + b;
}
int main()
{
    int m, n, sum = 0;

    printf("ENTER FIRST DIGIT :");
    scanf("%d", &m);

    printf("ENTER SECOND DIGIT :");
    scanf("%d", &n);

   sum = addition(m, n);

    printf("ADDITION IS = %d", sum);
}
*/

/*
    wap to show demo of array to pointer

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[5] = {1, 3, 2, 4, 5};
    int *p, n;

    p = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);
        printf("ADDRESS =%p\n", (void *)&(p[i]));
    }

    return 0;
}
*/

/*
    wap to show demo of pointer basic

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("VALUE OF a = %d\n", a);
    printf("ADDRESS OF a = %u\n", &a);
    printf("VALUE OF p = %d\n", *p);
    printf("ADDRESS OF a = %u\n", &*p);

    return 0;
}
*/

/*
    wap to show demo of palindrome

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, rev = 0, n, temp;

    printf("ENTER DIGIT :");
    scanf("%d", &n);

    temp = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (temp == rev)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("non-palindrome");
    }
    return 0;
}
*/

/*
    wap to show demo of maximum number udf

#include <stdio.h>
#include <stdlib.h>
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int m, n, result;

    printf("ENTER FIRST DIGIT :");
    scanf("%d", &m);

    printf("ENTER SECOND DIGIT :");
    scanf("%d", &n);

    result = max(m, n);

    printf("MAXIMUM NUMBER = %d", result);

    return 0;
}
*/

/*
    wap to show demo of strucutre (student)

#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct student
    {
        int rollno;
        char name[50];
        double sid;
        float marks;
    } s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("DEATAILS OF STUDENT = %d\n", i + 1);

        printf("ENTER STUDENT ROLLNO:");
        scanf("%d", &s[i].rollno);
        printf("ENTER STUDENT NAME:");
        scanf("%s", &s[i].name);
        printf("ENTER STUDENT SID:");
        scanf("%llu", &s[i].sid);
        printf("ENTER STUDENT MARKS:");
        scanf("%.2f", &s[i].marks);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("STUDENT ROLLNO: %d\n", s[i].rollno);
        printf("STUDENT NAME: %s\n", s[i].name);
        printf("STUDENT SID: %lld\n", s[i].sid);
        printf("ENTER STUDENT MARKS: %.2f\n", s[i].marks);
    }
    return 0;
}
*/

/*
    wap to show demo of nested structure

struct address
{
    char city[50];
    int pincode;
};
struct employee
{
    char name[100];
    int eid;
    char department;
    struct address homeaddress
} emp[3];
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("DEATAILS OF EMPLOYEE = %d\n", i + 1);

        printf("ENTER EMPLOYEE ID:");
        scanf("%d", &emp[i].eid);
        printf("ENTER EMPLOYEE NAME:");
        scanf("%s", &emp[i].name);
        printf("ENTER EMPLOYEE CITY:");
        scanf("%s", &emp[i].homeaddress.city);
        printf("ENTER EMPLOYEE PINCODE:");
        scanf("%d", &emp[i].homeaddress.pincode);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("EMPLOYEE %d:\n", i + 1);
        printf("EMPLOYEE ID: %d\n", emp[i].eid);
        printf("EMPLOYEE NAME: %s\n", emp[i].name);
        printf("EMPLOYEE CITY: %s\n", emp[i].homeaddress.city);
        printf("EPLOYEE PINCODE: %d\n", emp[i].homeaddress.pincode);
    }

    return 0;
}
*/

/*
    wap to show demo of file creation & stored array in it.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5];
    printf("ENTER FIVE ELEMENTS:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    FILE *m12;

    m12 = fopen("n_12.txt", "w");

    if (m12 == NULL)
    {
        fprintf(m12, "FILE NOT FOUND !!!!!");
        return 1;
    }
    else
    {
        fprintf(m12, "HEY !!!!");
        fprintf(m12, "STORED ELEMENTS GIVEN BELOW:");
        for (int i = 0; i < 5; i++)
        {
            fprintf(m12, "%d\n", arr[i]);
        }
    }

    fclose(m12);
    printf("DATA STORED SUUCESSFULLY  !!! ");

    return 0;
}
*/

/*
    wap to show demo of calloc

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("DATA = %d \n, ADDRESS =  %p", p[i], (void *)&p[i]);
    }

    free(p);

    return 0;
}
*/

/*
    wap to show demo of sum of array using pointer

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5], sum = 0;
    int *p = arr;
    printf("ENTER THE FIVE ELEMENTS :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(p + i);
    }
    printf("sum = %d", sum);

    return 0;
}
*/

/*
WAP in C to Demonstrate Recursion by calculating Sum of N Numbers

#include <stdio.h>
int sumOfN(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 is 0
    } else {
        return n + sumOfN(n - 1);
    }
}
int main() {
    int n;a
    printf("Enter a positive integer to calculate the sum of first N numbers: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sumOfN(n);
        printf("The sum of the first %d numbers is: %d\n", n, result);
    }
    printf("Press Enter to continue...");

    return 0;
}
*/

/*
    wap to show demo of structure using pointer

#include <stdio.h>
#include <stdlib.h>
struct student
{
    int rollno;
    char name[50];
    float marks;
    long long sid;
} s[3];

int main()
{

    struct student *p = s;
    for (int i = 0; i < 3; i++)
    {
        printf("STUDENTS DETAIL !!!", i + 1);
        printf("\nENTER STUDENT ROLLNO :");
        scanf("%d", &p->rollno);

        printf("\nENTER STUDENT NAME : ");
        scanf("%s", &p->name);

        printf("\nENTER STUDENT SID : ");
        scanf("%lld", &p->sid);

        printf("\nENTER STUDENT MARKS :");
        scanf("%.2f", &p->marks);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("STUDENTS DETAIL !!!", i + 1);
        printf("STUDENT ROLLNO : %d\n", p->rollno);
        printf("STUDENT NAME : %s\n", p->name);
        printf("STUDENT SID : %lld\n", p->sid);
        printf("STUDENT MARKS : %.2f\n", p->marks);
    }
    return 0;
}
//  run time problem solution : if rollno and name are double inputed remove for loop
*/