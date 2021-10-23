#include<stdio.h>
void ActivitySelection(int start[], int finish[], int n)
{
 printf("the following activities are selected \n");
 int j=0;
 printf("%d", j);
 int i;
 for (i=1;i<n; i++)
{
 if(start[i]>= finish[j])
{
 printf("%d ", i);
 j=i;
}
}
}
int main()
{
 int start[]={1,3,0,5,8,5};
 int finish[]={2,4,6,7,9,9};
 int n= sizeof(start)/sizeof(start[0]);
 ActivitySelection(start, finish ,n);
 return 0;
}
