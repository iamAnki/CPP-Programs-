#include<stdio.h>
#include<math.h>
 
int sol[20],c;
 
int main()
{
int num;
void queen(int row,int num);
printf("Enter the number of Queens:");
scanf("%d",&num);
queen(1,num);
return 0;
}
 
void print(int num)
{
int i,j;
printf("\nSolution %d:\n\n",++c);
 
for(i=1;i<=num;++i)
  printf("\t%d",i);
 
for(i=1;i<=num;++i)
{
  printf("\n%d",i);
  for(j=1;j<=num;++j)
  {
   if(sol[i]==j)
    printf("\tQ");
   else
    printf("\t-");
  }
}
}
 

int pos(int row,int col)
{
int i;
for(i=1;i<=row-1;++i)
{
  if(sol[i]==col)
   return 0;
  else
   if(abs(sol[i]-col)==abs(i-row))
    return 0;
}
return 1; 
}
 
void queen(int row,int num)
{
int col;
for(col=1;col<=num;++col)
{
  if(pos(row,col))
  {
   sol[row]=col;
   if(row==num) 
    print(num);
   else 
    queen(row+1,num);
  }
}
}