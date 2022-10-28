#include<stdio.h>
int main()
{
 int n,choice,remain,mul=1,i,m=0,flag=0; 
 printf("Enter number:");
 scanf("%d",&n);
 printf("Enter your choice\n");
 printf(" 1.To check whether the no. is prime\n 2.To multiply the digits\n Otherwise\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 m=n/2; 
 for(i=2;i<=m;i++) 
 { 
 if(n%i==0) 
 { 
 printf("Number is not prime"); 
 flag=1; 
 break; 
} 
} 
if(flag==0) 
printf("Number is prime");
 break;
 
case 2:
 while(n>0)
 {
 remain= n % 10;
 mul = (mul * remain);
 n/=10;
 }
 printf("The multiplication of its digits is %d", mul);
 break;
 default:
 printf("There is an error!");
  }
return 0;
}
