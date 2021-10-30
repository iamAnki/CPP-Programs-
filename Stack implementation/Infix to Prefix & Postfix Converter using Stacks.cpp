#include<iostream>
#include<string>
#include<stack>

using namespace std;

string postfix(string s);
string prefix(string s);
int check(char c);

int main(){
    string inputvalue;
    cout<<"ENTER THE INFIX EXPRESSION"<<endl;
    cin>>inputvalue;
    int ch;
    cout<<"Press 1 for converting it to Postfix \nPress 2 for converting to Prefix"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1 : cout<<"THE POSTFIX EXPRESSION IS:"<<endl;
    cout<<postfix(inputvalue)<<endl;
        break;
    case 2 : cout<<"THE PREFIX EXPRESSION IS:"<<endl;
    cout<<prefix(inputvalue)<<endl;
        break; 

    default : cout<<"Invalid Input"<<endl;
        break;
    }
    
return 0;
    
    
}
/*------------------------------------------------------------------*///Checking the priority operators in the order of '^'>'*''/'>'+''-'
int check(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else {
        return -1;
    }
} 
/*------------------------------------------------------------------*///Postfix conversion function
string postfix(string s){

    stack<char> mystack;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            result+=s[i];
        }
        else if(s[i]=='('){
            mystack.push(s[i]);
        }
        else if(s[i]==')'){
            while (!mystack.empty() && mystack.top()!= '(')
            {
                result+=mystack.top();
                mystack.pop();
            }
            if(!mystack.empty()){
                mystack.pop();
            }
            
        }
        else{
            while(!mystack.empty() && check(mystack.top())>check(s[i])){
                result+=mystack.top();
                mystack.pop();
            }
            mystack.push(s[i]);
        }
    }
    while(!mystack.empty()){
        result+=mystack.top();
        mystack.pop();
    }
    return result;

}
/*------------------------------------------------------------------*///Prefix conversion function.
string prefix(string s){
    
    stack<char> mystack;
    string result;

    string temp;
    for (int i=s.length()-1; i>=0; i--){
      temp+=s[i];
     }

    for (int i = 0; i < temp.length(); i++)
    {
        if((temp[i]>='a' && temp[i]<='z') || (temp[i]>='A' && temp[i]<='Z'))
        {
            result+=temp[i];
        }
        else if(temp[i]==')'){
            mystack.push(temp[i]);
        }
        else if(temp[i]=='('){
            while (!mystack.empty() && mystack.top()!= ')')
            {
                result+=mystack.top();
                mystack.pop();
            }
            if(!mystack.empty()){
                mystack.pop();
            }
            
        }
        else{
            while(!mystack.empty() && check(mystack.top())>=check(temp[i])){
                result+=mystack.top();
                mystack.pop();
            }
            mystack.push(temp[i]);
        }
    }
    while(!mystack.empty()){
        result+=mystack.top();
        mystack.pop();
    }
    string finalresult;
    for (int i=result.length()-1; i>=0; i--){
      finalresult+=result[i];
     }

    return finalresult;

}
