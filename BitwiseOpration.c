#include <stdio.h>
#include <math.h>
int main()
{
 int num_1, num_2, result;
 char op;
 printf("Enter A to perform Bitwise AND \n");
 printf("Enter B to perform Bitwise OR \n");
 printf("Enter C to perform Bitwise XOR \n");
 printf("Enter D to perform Bitwise NOT \n");
 scanf("%c",&op);
 switch (op)
 {
 case 'A':
 printf("Enter the first number : ");
 scanf("%d",&num_1);
 printf("Enter the second number : ");
 scanf("%d",&num_2);
 result = num_1 & num_2;
 printf("%d",result);
 break;
 
 case 'B':
 printf("Enter the first number : ");
 scanf("%d",&num_1);
 printf("Enter the second number : ");
 scanf("%d",&num_2);
 result = num_1 | num_2;
 printf("%d",result);
 break;
 case 'C':
 printf("Enter the first number : ");
 scanf("%d",&num_1);
 printf("Enter the second number : ");
 scanf("%d",&num_2);
 result = num_1 ^ num_2;
 printf("%d",result);
 break;
 case 'D':
 printf("Enter the number : ");
 scanf("%d",&num_1);
 result = !num_1;
 printf("%d",result);
 break;
 default:
 printf("Invalid Choice \n");
 break;
 }
 return 0;
}
