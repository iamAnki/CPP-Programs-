// problem link - https://codeforces.com/contest/1598/problem/A

#include<bits/stdc++.h>
#define int long long int
#define pb push_back
using namespace std;
#define N 1000000007
#define PI 3.141592653589793238462
int mod_add(int x, int y, int z)
{
    x = x % z; 
    y = y % z; 
    return (((x + y) % z) + z) % z;
}
 
int mod_mul(int x, int y, int z)
{
    x = x % z;
    y = y % z;
    return (((x * y) % z) + z) % z;
}
 
int mod_sub(int x, int y, int z)
{
    x = x % z;
    y = y % z;
    return (((x - y) % z) + z) % z;
}
 
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int i, number, tc;
    cin>>tc;
    while(tc--)
    {
        cin>>number;
        string ajay;
        string arpit;
        cin>>ajay>>arpit;
        for(i=0;i<number;i++)
        {
            if(ajay[i] == '1' && arpit[i] == '1'){
                break;
            }
        }
        if(i != number){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}
