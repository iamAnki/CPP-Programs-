#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;int ans=0;
        cin>>s;
        for (int i = 0; i < s.length()-1; i++)
        {
            if(s[i]=='0'&&s[i+1]=='1'){
                ans++;
            }

        }
        if(s[s.length()-1]=='0') ans++;
        cout<<min(ans,2)<<endl;
        
    }
    return 0;
}