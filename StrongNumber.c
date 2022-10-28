#include<stdio.h>
int main()
{
int n,temp,end,rem,fact,sum,i;
printf("Enter last number:");
scanf("%d",&end);
 printf("All strongs numbers between 1 to %d are:\n",end);
for(n=1;n<=end;n++)
{
temp=n;
sum=0;
while(temp>0)
{
rem = temp%10;
fact=1;
for(i=1;i<=rem;i++)
{
fact=fact*i;
}
sum=sum+fact;
 temp=temp/10;
}
if(n==sum)
{
printf("%d is a strong number\n",n);
}
}
return 0;
}
