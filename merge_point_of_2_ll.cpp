class Stack
{
    public: 
    int size;
    int *A;
    int top;
};

void push(Stack *ptr,int num)
{
    if(ptr->top==ptr->size-1)
    {
        cout<<"OverFlow Condition";
    }
    else {
     ptr->top++;
     ptr->A[ptr->top]=num;
    }
}

int pop(Stack *ptr)
{
    int num;
    if(ptr->top==-1)
    {
        cout<<"UnderFlow Condition";
    }
    else {
     num=ptr->A[ptr->top];
     ptr->top--;
    }
    return num;
}
