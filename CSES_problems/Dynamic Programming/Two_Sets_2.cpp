    #include <bits/stdc++.h>
    #include <cstdio>
    #include <cstring>
    #include <cmath>
    #include <cstring>
    #include <chrono>
    #include <complex>
    #define endl "\n"
    #define ll long long int
    #define vi vector<int>
    #define vll vector<ll>
    #define vvi vector < vi >
    #define pii pair<int,int>
    #define pll pair<long long, long long>
    #define mod 1000000007
    #define inf 1000000000000000001;
    #define all(c) c.begin(),c.end()
    #define mp(x,y) make_pair(x,y)
    #define mem(a,val) memset(a,val,sizeof(a))
    #define eb emplace_back
    #define f first
    #define s second
    #define int long long int
    
    using namespace std;

    int gcdExtended(int a, int b, int *x, int *y); 
  
// Function to find modulo inverse of b. It returns 
// -1 when inverse doesn't 
int modInverse(int b, int m) 
{ 
    int x, y; // used in extended GCD algorithm 
    int g = gcdExtended(b, m, &x, &y); 
  
    // Return -1 if b and m are not co-prime 
    if (g != 1) 
        return -1; 
  
    // m is added to handle negative x 
    return (x%m + m) % m; 
} 
  
// Function to compute a/b under modlo m 
void modDivide(int a, int b, int m) 
{ 
    a = a % m; 
    int inv = modInverse(b, m); 
    if (inv == -1) 
       cout << "Division not defined"; 
    else
       cout  << (inv * a) % m; 
} 
  
// C function for extended Euclidean Algorithm (used to 
// find modular inverse. 
int gcdExtended(int a, int b, int *x, int *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
    int x1, y1; // To store results of recursive call 
    int gcd = gcdExtended(b%a, a, &x1, &y1); 
  
    // Update x and y using results of recursive 
    // call 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
} 






    signed main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

     
        int n;

        cin>>n;

        vector<int> v;

        for(int i=1;i<=n;i++) {
            v.eb(i);
        }

        int sum=((n+1)*(n))/2;

        if(sum%2!=0) {
            cout<<0;
            return 0;
        }

        sum/=2;

        int dp[n+1][sum+1];

        for(int j=0;j<=sum;j++) {
            dp[0][j]=0;
        }

        for(int i=0;i<=n;i++) {
            dp[i][0]=1;
        }


        for(int i=1;i<=n;i++) {
            for(int j=1;j<=sum;j++) {
                if(v[i-1]<=j) {
                    dp[i][j]=(dp[i-1][j]%mod+dp[i-1][j-v[i-1]]%mod)%mod;
                }

                else {
                    dp[i][j]=dp[i-1][j]%mod;
                }
            }
        }
modDivide(dp[n][sum],2,mod);


        return 0;
    }