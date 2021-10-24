#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int size;
    char *arr;
    int top;
};

int isEmpty(struct stack *p){
    if (p->top==-1)
    {      
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void push(struct stack *ptr,char oParenthesis){
    ++ptr->top;
    ptr->arr[ptr->top]=oParenthesis;
}

void pop(struct stack *ptr){
    --ptr->top;
}

int match(struct stack *ptr,char cParenthesis){
    if (ptr->arr[ptr->top]=='(' && cParenthesis==')')
    {
        return 1;
    }
    if (ptr->arr[ptr->top]=='{' && cParenthesis=='}')
    {
        return 1;
    }
    if (ptr->arr[ptr->top]=='[' && cParenthesis==']')
    {
        return 1;
    }
return 0;
}

int main(){
    struct stack *s;
    int flag=0;
    char exp[40];
    int flag2;
    s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=20;
    s->arr=(char *)malloc(s->size*sizeof(char));

    puts("enter the expression : ");
    gets(exp);   

    for(int i=0;i<strlen(exp);i++){
        if (exp[i]=='('||exp[i]=='['||exp[i]=='{')
        {
            push(s,exp[i]);
        }
        else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
        {   
            if (isEmpty(s))
            {
                flag=1;
            }
            flag2=match(s,exp[i]);
            if(flag2){
            pop(s);
            }
        }    
        else
        {
            continue;
        }   
    }
    if(s->top==-1&&flag!=1){
        printf("the parenthesis in expression is balanced");
    }
    else
    {
        printf("The parenthesis in expression is unbalanced");
    }

}