#include<stdio.h>

void knapsack(int n, float weight[], float profit[], float capacity)
{
    float ratio[20];  //an array to store ratio of profit/weight
    float temp;  //variable for swapping
    int i,j;
    for (i = 0; i < n; i++)
    {
        ratio[i] = profit[i] / weight[i];   //calculating ratio
    }

    for (i = 0; i < n; i++)   //sorting the ratio array in increasing order
    {
        for (j = i + 1; j < n; j++) 
        {
            if (ratio[i] < ratio[j])
            {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
        }
    }

    float tp = 0;

    for (i = 0; i < n; i++)
    {
        if(capacity>0 && weight[i]<=capacity)
        {
            capacity=capacity-weight[i];
            tp = tp + profit[i];
        }
        else
            break;
    }
    if(capacity>0)   //if space is there but the weight of object is more as compared to the space left then we can include that object but accordingly we have to calculate the profit of that object 
    {
        tp= tp + (capacity * profit[i]) / weight[i];
    }
    printf("\nMaximum profit is:- %f", tp);
}

int main() 
{
    float weight[20], profit[20], capacity;
    int n, i;

    printf("\nEnter the no. of objects:- ");
    scanf("%d", &n);

    printf("\nEnter the wts and profits of each object:- ");
    for (i = 0; i < n; i++)
    {
        scanf("%f %f", &weight[i], &profit[i]);
    }

    printf("\nEnter the capacity of knapsack:- ");
    scanf("%f", &capacity);

    knapsack(n, weight, profit, capacity);
    return(0);
}
