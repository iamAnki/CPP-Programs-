// Write a program to implement the activity-selection problem stated as follows: You are given in activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time. Example: Consider the following 6 activities (0, 1, 2, 3, 4, 5), start[] = {1, 3, 0, 5, 8, 5); finish[]=(2, 4, 6, 7, 9, 9): The maximum set of
// activities that can be executed by a single person is (0, 1, 3, 4).

#include <stdio.h>
void max_act(int s_517[], int f_517[], int n)
{
    int i, j;
    printf("Following activities are selected:\n");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
        if (s_517[j] >= f_517[i])
        {
            printf("%d ", j);
            i = j;
        }
    }
}
int main()
{
    int s_517[] = {1, 3, 0, 5, 8, 5};
    int f_517[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(s_517) / sizeof(s_517[0]);
    max_act(s_517, f_517, n);
    return 0;
}