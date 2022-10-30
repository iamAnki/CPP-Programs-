#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}


void grid(int n, int m, int i, int j, int count, int &ans){
    if(i==n){
        count+=m-j;
        int temp=pow(2,count);
        ans+=temp;
        ans%=998244353;
        return;
    }

    if(j==m){
        count+=n-i;
        int temp=pow(2,count);
        ans+=temp;
        ans%=998244353;
        return;
    }

    grid(n,m,i+1,j,count+1, ans);
    grid(n,m,i,j+1,count+1, ans);

}


int32_t main(){
fast


int t=1;
cin>>t;
while(t--){
        int n,m;
        cin>>n>>m;
        int ans=0;
        grid(n,m,1,1,0,ans);
        cout<<ans<<endl;
}
return 0;
}
