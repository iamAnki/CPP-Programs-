#include<stdio.h>
#include<conio.h>
int main()
{
 int i, j, a[10][10], sum, rows, columns;
 printf("\nEnter the number of Rows : ");
 scanf("%d", &rows);
 printf("\nEnter the number of Columns : ");
 scanf("%d", &columns);
 for (i = 0; i < rows; i++)
 for (j = 0; j < columns; j++) 
{
 printf("\nEnter the Element a[%d][%d] : ", i, j);
 scanf("%d", &a[i][j]);
 }
 sum = 0;
 for (i = 0; i < rows; i++)
 for (j = 0; j < columns; j++) 
{
 if (i < j) 
{
 sum = sum + a[i][j];
 }
}
 printf("\nSum of Upper Triangle Elements : %d", sum);
 return (0);
}
