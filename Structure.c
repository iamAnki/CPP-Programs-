#include <stdio.h>
struct employee{
 char emp_name[30];
 int emp_id;
 int salary;
 char address[30];
} ;
void main()
{
 //array to store structure values of all employees
 struct employee e[5];
 printf("Enter Employee Details \n \n");
 for(int i=0; i<5; i++)
 {
 //Name
 printf("Name: ");
 scanf("%s",e[i].emp_name);
 //ID
 printf("Id: ");
 scanf("%d",&e[i].emp_id);
 //Salary
 printf("Salary: ");
 scanf("%d",&e[i].salary);
 printf("Address: ");
 scanf("%s",e[i].address);
 printf("\n");
 }
 printf("--------------Employees Details whose salary >4000---------------\n");
 for(int i=0; i<5; i++)
 {
 if(e[i].salary>4000)
 {
 printf("Name \t: ");
 printf("%s \n",e[i].emp_name);
printf("Id \t: ");
 printf("%d \n",e[i].emp_id);
 printf("Salary \t: ");
 printf("%d \n",e[i].salary);
 
 printf("Address: ");
 printf("%s",e[i].address);
 printf("\n");
 }
 
 }
}


