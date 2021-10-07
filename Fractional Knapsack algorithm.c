// Write a program to implementation of Fractional Knapsack algorithm.

#include <stdio.h>
void main()
{
    int c_517, n_517, cw_517, item;
    int u_517[10];
    float tv_517;
    int i;
    int weight[10];
    int value[10];
    printf("Enter the knapsack capacity:\n");
    scanf("%d", &c_517);
    printf("Enter the number of items:\n");
    scanf("%d", &n_517);
    printf("Enter the weight and value of %d item:\n", n_517);
    for (i = 0; i < n_517; i++)
    {
        printf("Weight[%d]: ", i);
        scanf("%d", &weight[i]);
        printf("Value[%d]: ", i);
        scanf("%d", &value[i]);
    }
    for (i = 0; i < n_517; ++i)
        u_517[i] = 0;
    cw_517 = c_517;
    while (cw_517 > 0)
    {
        item = -1;
        for (i = 0; i < n_517; ++i)
            if ((u_517[i] == 0) &&((item == -1) || ((float)value[i] / weight[i] > (float)value[item] / weight[item])))
                item = i;
        u_517[item] = 1;
        cw_517 -= weight[item];
        tv_517 += value[item];
        if (cw_517 >= 0)
            printf("Fully added object %d of value %d and weight %d.\n Space left: %d.\n", item + 1, value[item], weight[item], cw_517);
        else
        {
            int item_percent = (int)((1 + (float)cw_517 / weight[item]) * 100);
            printf("Partially added %d%% of object %d of value %d and weight %d.\n", item_percent,item + 1, value[item], weight[item]);
            tv_517 -= value[item];
            tv_517 += (1 + (float)cw_517 / weight[item]) * value[item];
        }
    }
    printf("Total value of added objects is %.2f.\n", tv_517);
}