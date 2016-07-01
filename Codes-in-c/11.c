#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
      char name[20];
      int id;
      float salary;
      };
void display(struct employee emp)
{
    //display employee name,id,salary
    printf("Name: %s",emp.name);
    printf("\nsalary: %f",emp.salary);
    printf("\nId:%d",emp.id);
}
void increasesalary(struct employee emp)
{
    float n;
    float *p;
    p=&emp.salary;
    printf("Enter the salary to be increased");
    scanf("%f",&n);
    *p=*p+n;
    printf("the new salary is %f",*p);
}
void main()
{
    struct employee emp;
    strcpy(emp.name, "Niraj");
    emp.salary=200000;
    emp.id=10;

    //get employee name,id &salary $increase salary

    display(emp);
    increasesalary(emp);
}
