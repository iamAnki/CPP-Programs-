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
bool ispallindrome(string s)
{
    int len=s.length();
    for(int i=0,j=len-1;j>i;j--,i++)
    {
        if(s[i]!=s[j])
        return false;
    }
 
    return true;
}
 
bool isrev(string a,string b,int len)
{
    for(int i=0,j=len-1;a[i]!='\0';i++,j--)
    {
        if(a[i]!=b[j])
        return false;
    }
 
    return true;
}
 
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    string str[n];
    string ans;
    fo(i,n)cin>>str[i];
    string temp;
    int flag=0;
    fo(i,n)
    {
        if(ispallindrome(str[i]) && flag!=1)
        {
            flag=1;
            temp=str[i];
            ans+=temp;
        }
 
        
 
    }
    fo(i,n)
    {
        for(int j=i+1;j<n;j++)
        {
            if(isrev(str[i],str[j],m))
            {
                ans=str[i]+ans+str[j];
            }
        }
    }
    cout<<ans.length()<<endl;
    cout<<ans<<endl;
 
   
}
