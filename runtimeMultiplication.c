#include <stdio.h>
int main()
{
 int number, mul;
 mul = 1;
 while (1)
 {
 printf("Enter a Number : ");
 scanf("%d", &number);
 if (number == 0)
 {
 break;
 }
 mul = number * mul;
 printf("Result multiplication is %d\n",mul);
 }
 printf("Mul : %d \n", mul);
 return 0;
}