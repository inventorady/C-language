/*
    wap to demo of udf where will be able to pass array as valueto the function and display
    the structure members inside the function
*/
#include <stdio.h>
#include <stdlib.h> 
struct student
{
    char name[20];
    int rollno;
    float marks;
};
void displaystudent(struct student stu)
{
    stu.marks += 10;
    printf("Name: %s\n", stu.name);
    printf("Roll No: %d\n", stu.rollno);
    printf("Marks: %.2f\n", stu.marks);
}
int main()
{
    struct student student;
    printf("Enter name, roll no and marks of student :\n");
    scanf("%s", student.name);
    scanf("%d", &student.rollno);
    scanf("%f", &student.marks);

    displaystudent(student);
    printf("\n original marks in main: %.2f\n", student.marks); 

    return 0;
}