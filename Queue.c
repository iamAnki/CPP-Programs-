#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int r, f;
    int *arr;
    int size;
};
struct queue q;

//perform traversal of elements 
void traverse()
{
    printf("The elements in queue are: ");
    int i;
    for (i = q.f + 1; i <= q.r; i++)
    {
        printf("%d ", q.arr[i]);
    }
    printf("\n");
}

//check if queue is empty to satisfy the underflow condition
int is_empty()
{
    if (q.r == q.f)
    {
        return 1;
    }
    return 0;
}

//check if queue is empty to satisfy the overflow condition
int is_full()
{
    if (q.r == q.size - 1)
    {
        return 1;
    }
    return 0;
}

//perform insertion of elements in queue
void enqueue(int val)
{
    if (is_full())
    {
        printf("queue overflow!!");
    }
    else
    {
        q.r++;
        q.arr[q.r] = val;
    }
}

//perform deletion of elements in queue
int dequeue()
{
    if (is_empty())
    {
        printf("queue underflow!!");
    }
    else
    {
        int val;
        q.f++;
        val = q.arr[q.f];
        return val;
    }
}

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    q.f = q.r = -1;
    q.size = n;
    q.arr = (int *)malloc(q.size * sizeof(int));
    int i,d;
    printf("Enter the number of elements to enter in a queue: ");
    scanf("%d",&d);
    for (i = 0; i < d; i++)
    {
        int x;
        scanf("%d", &x);
        enqueue(x);
        traverse();
    }

    printf("\n");
    printf("Element dequeue is %d\n", dequeue());
    traverse();
    printf("Element dequeue is %d\n", dequeue());
    traverse();
    return 0;
}
