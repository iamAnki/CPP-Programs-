//codeforces round 199 (div 2) A. Xenia and Divisors
//link :   https://codeforces.com/contest/342/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main() 
{
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        m[a]++;
    }
    if(m[5]>0||m[7]>0)
    {cout<<-1;
 return 0;
    }
    if(!((m[1]==(m[2]+m[3]))&& ((m[2]+m[3])==(m[4]+m[6]))&&m[3]<=m[6]))
    cout<<-1;
    else
    
{
    for(int i=0;i<m[1];i++)
    {
        
        cout<<1<<" ";
        if(m[3]!=0)
        {
            cout<<"3 6"<<endl;
            m[3]=m[3]-1;
            continue;
        }
        
        if(m[4]!=0&& m[3]==0)
        {
            cout<<"2 4"<<endl;
            m[4]=m[4]-1;
        }
        else cout<<"2 6"<<endl;
    }
}    
    return 0;
}
