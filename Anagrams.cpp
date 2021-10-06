// BY AYUSH AKASH
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; while(t--){
        int res=0; unordered_map<int,int> mppa,mppb; string a,b; cin>>a>>b;
        for(int i=0;i<a.length();++i) mppa[a[i]-'a']++;
        for(int i=0;i<b.length();++i) mppb[b[i]-'a']++;
        for(int i=0;i<26;++i) res+=abs(mppa[i]-mppb[i]);
        cout<<res<<"\n";
    }
    return 0;
}
