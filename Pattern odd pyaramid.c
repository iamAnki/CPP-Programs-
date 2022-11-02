#include<stdio.h>
int main()
{
int totalrows,row=1,space,symbol,k;
printf("Enter total number of rows:");
scanf("%d",&totalrows);
for(row=1;row<=totalrows;row++)
{
for(space=1;space<=(totalrows-row);space++)
{
printf(" ");
}
k=0;
for(symbol=1;symbol<=((2*row)-1);symbol++)
{
printf("%d ",((2*row)-1)+k);
k++;
}
 printf("\n");
}
return 0;
}
