#include<bits/stdc++.h>
using namespace std;
int main(){
    int flag=0;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='H'){
        flag=1;
        break;
        }
        if(s[i]=='Q'){
        flag=1;
        break;
        }
        if(s[i]=='9'){
        flag=1;
        break;
        }
       
    }
    if(flag)
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}