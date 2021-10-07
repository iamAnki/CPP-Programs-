#include <bits/stdc++.h>
using namespace std;
class StackNode {
public:
    int data;
    StackNode* next;
};
 
StackNode* newNode(int data)
{
    StackNode* stackNode = new StackNode();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}
 
bool underflow(StackNode* top){
	if(top==NULL){
		cout<<"Underflow"<<endl;
		return true;
	}
	return false;
}
 
void push(StackNode** top, int data)
{
    StackNode* temp = newNode(data);
    temp->next = *top;
    *top = temp;
    cout << data << " pushed to stack\n";
}
 
int pop(StackNode** top)
{
    if (!underflow(*top))
    {
    StackNode* temp = *top;
    *top = (*top)->next;
    return temp->data;
	}
}
int main()
{
    StackNode* top = NULL;
    push(&top, 1);
    push(&top, 2);
    push(&top, 3);
    cout << pop(&top) << " popped from stack\n";
    return 0;
}