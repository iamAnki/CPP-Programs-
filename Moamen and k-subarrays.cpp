PROBLEM LINK:https://codeforces.com/contest/1557/problem/B

#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
#define max(a,b)(a>b?a:b)
#define min(a,b)(a>b?b:a)
#define fo(i,n)for(int i=0;i<n;i++)
#define F(i,j,n)for(int i=j;i<n;i++)
#define FO(i,j,n)(int i=n;i>=j;i--)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int>pi;
#define pb push_back
#define mp make_pair
 
int gcd(int a,int b)
{
return b==0?a:gcd(b,a%b);
}
 
 
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<int,int>store;
        fo(i,n)
        {
            int a;
            cin>>a;
            //element=key
            //value=index
            store[a]=i;
        }    
            vector<int>locations;
            for(auto element: store)
            {
                locations.push_back(element.second);
            }
            int l=1;
            for(int i=l;i<locations.size();i++)
            {
                if(locations[i]-locations[i-1]!=1)
                l++;
            }
            if(l<=k)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    }
