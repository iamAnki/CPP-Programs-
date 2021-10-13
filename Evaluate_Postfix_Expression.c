#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
struct Stack{
    int top;
    long max;
    int* array;
};
struct Stack* createStack(long max)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->max = max;
    stack->top = -1;
    stack->array = (int*)malloc(stack->max * sizeof(int));
    return stack;
};
int IsFull(struct Stack* stack)
{
    return stack->top == (stack->max - 1);
}
int IsEmpty(struct Stack* stack)
{
    return stack->top == (-1);
}
void push(struct Stack* stack, int item)
{
    if(IsFull(stack))
    {
        printf("OverFlow....");
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}
int pop(struct Stack* stack)
{
    if(IsEmpty(stack))
    {
        printf("UnderFlow....");
    }
    else
        return stack->array[stack->top--];
}

int evaluate(char* e)
{
    struct Stack* stack = createStack(strlen(e));
    for(int i=0 ; e[i] ; i++)
    {
        if(isdigit(e[i]))
            push(stack, e[i]-'0');
        else
        {
            int a = pop(stack);
            int b = pop(stack);
            switch(e[i])
            {
                case '+' : push(stack, b+a);
                           break;
                case '-' : push(stack, b-a);
                           break;
                case '*' : push(stack, b*a);
                           break;
                case '/' : push(stack, b/a);
                           break;
                case '%' : push(stack, b%a);
                           break;
            }

        }
    }
    return pop(stack);
}
int main()
{
    //char e[] = "4572+-*";
    char e[100];
    int n=0;
    printf("Enter postfix Expression : ");
    gets(e);
    n = strlen(e);
    if(e[n-1] == '+' || e[n-1] == '-' || e[n-1] == '*' || e[n-1] == '/' || e[n-1] == '%')
        printf("\nEvaluation : %d\n", evaluate(e));
    else
        printf("\nEnter valid postfix expression.");

    return 0;
}
