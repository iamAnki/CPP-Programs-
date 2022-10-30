#include <iostream>
void swap(int *p1, int *p2)
{
int temp = *p1;
*p1 = *p2;
*p2 = temp;
}
// This is an optimised code for the bubble sort
void bSort(int arrnumbers[], int n)
{
int i, j;
bool check;
for (i = 0; i < n-1; i++)
{
check = false;
for (j = 0; j < n-i-1; j++)
{
if (arrnumbers[j] > arrnumbers[j+1])
{
swap(&arrnumbers[j], &arrnumbers[j+1]);
check = true;
}
}
// We are breaking from the loop in case two elements were not swapped by inner loop.
if (check == false)
break;
}
}
//This function is to print the array sequence as final output after sorting
void print(int arrnumbers[], int sizeofarray)
{
int i;
for (i=0; i < sizeofarray; i++)
printf("%d ", arrnumbers[i]);
}
// This the main program from where the execution will start
int main()
{
int arrnumbers[] = {5, 6, 1, 0, 2, 9};
int n = sizeof(arrnumbers)/sizeof(arrnumbers[0]);
bSort(arrnumbers, n);
printf("Sorted array: \n");
print(arrnumbers, n);
return 0;
}
