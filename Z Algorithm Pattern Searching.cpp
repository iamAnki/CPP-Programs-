#include <bits/stdc++.h>

using namespace std;

vector<int> zAlgorithm(string s){
    int n=s.length();
    vector<int> z(n);
    int l=0, r=0;
    for (int i=1;i<n;i++){
        if (i<=r){
            z[i]=min(z[i-l], r-i+1);
        }
        while (i+z[i]<n && s[z[i]]==s[i+z[i]]){
            z[i]++;
        }
        if (i+z[i]-1>r){
            l=i;
            r=i+z[i]-1;
        }
    }
    return z;
}

int main()
{
    string str="fixprefixsuffix";
    //string patt="aba";
    //string s=patt+"$"+str;
    vector<int>z=zAlgorithm(str);
    for (auto it=z.begin(); it!=z.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    /*
    for (int i=0; i<z.size();i++){
        if (z[i]==patt.length()){
            cout<<i-patt.length()-1<<" ";
        }
    }*/
    return 0;
}
