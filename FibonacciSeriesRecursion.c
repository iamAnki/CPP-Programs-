#include <stdio.h>

// fibonacci() funtion definition
int fibonacci(int num)
{
    // first base condition check
    if (num == 0)
    {
        return 0; // retuning 0, if condition mets
    }
    // second base condition check
    else if (num == 1)
    {
        return 1; // returning 1, if condition mets
    }
    // else calling the fibonacci() function recursively, till we get to the base conditions
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2); // recursively calling the fibonacc() function and then adding them
    }
}

int main()
{
    int num; // variable to store how many elements to be displayed in the series
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); // taking user input

    for (int i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i)); // calling fibonacci() function for each iteration and printing the returned value
    }

    return 0;
}
