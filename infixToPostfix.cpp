#include<bits/stdc++.h>
using namespace std;
int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string infixToPostfix(string s)
{
    stack<char>st;string res="";
    for(int i=0;i<s.length();i++){
         if((s[i]>='0'&&s[i]<='9')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))res+=s[i];
         else if(s[i]==')')
            {
                 while(!st.empty()&&st.top()!='(')
                 {
                     res+=st.top();
                     st.pop();
                 }
                 st.pop();
             }
             else if(s[i]=='('){
                 st.push(s[i]);
             }
             else{
                 while(!st.empty()&&prec(s[i])<=prec(st.top())){
                     res+=st.top();
                     st.pop();
                 }
                 st.push(s[i]);
             }
         }
         while(!st.empty()) {
        res += st.top();
        st.pop();
    }
             return res;
    }
int main(){
     string exp = "a+(((b-c)*(d-e)+f)/g)^(h-j)";
    cout<<infixToPostfix(exp);
return 0;
}