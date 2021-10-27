#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    string s;cin>>s;
    int a[27];
    memset(a,0,sizeof a);
    for(int i=0;i<s.length();i++){
        a[s[i]-'a']++;
    }
    ll cnt=0,idx=0;
    for(int i=0;i<s.length();i++){
        if(a[i]>cnt){
            idx=i;
            cnt=a[i];
        }
    }
    cout<<(char)('a'+idx)<<endl;
    return 0;
}
