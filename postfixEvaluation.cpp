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
int postfix(string s)
{
    stack<int>st;
    for(int i=0;i<s.length();i++)
    {
         if((s[i]>='0'&&s[i]<='9')){
             st.push(s[i]-'0');
         }
         else {
             int o2=st.top();st.pop();
              int o1=st.top();st.pop();
            switch (s[i]){
                case '+':
                st.push(o1+o2);
                break;
                case '-':
                st.push(o1-o2);
                break;
                case '/':
                st.push(o1/o2);
                break;
                case '*':
                st.push(o1*o2);
                break;
                case '^':
                st.push(pow(o1,o2));
                break;

            }

         }
    }
    return st.top();
}
int main(){
     string exp = "231*+9-";
    cout<<postfix(exp);
return 0;
}