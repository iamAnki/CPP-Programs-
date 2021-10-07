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