#include <stdio.h>
int main()
{
int i, low=0, high=6, mid, n, key, array[100];
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter %d elements", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to findn");
scanf("%d", &key);
while (low <= high) 
{
mid = (low+high)/2;
if(array[mid] < key)
{
low = mid + 1;
}
else if (array[mid] == key)
{
printf("%d found at location %d", key, mid);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found!", key);
return 0;
}
