#include<stdio.h>
#include<string.h>
int main()
{
int sales;
float com;
printf("Enter the total sales:");
scanf("%d", &sales);
if(sales<100)
printf("\nSorry no Commission, please do more sales");
else if(sales>=100 && sales<=500)
printf("\nCommission : %f ",(sales*0.1));
else
{
com=(sales-500)*0.08;
printf("\nCommission : %f ",(com+100));
}
return 0;
}
