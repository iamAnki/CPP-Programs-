#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define mp make_pair
#define pb push_back
#define veci vector<int>
 
int dp[100001][3];
 
int main(){
    
    int n;
    cin >> n;
    int A[n], B[n], C[n];
 
    for(int i = 0; i < n; i++){
        cin >> A[i] >> B[i] >> C[i];
    }
 
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;
 
    for(int i = 1; i < n+1; i++){
        dp[i][0] = max(dp[i-1][1],dp[i-1][2]) + A[i-1];
        
        dp[i][1] = max(dp[i-1][0],dp[i-1][2]) + B[i-1];
 
        dp[i][2] = max(dp[i-1][0],dp[i-1][1]) + C[i-1];
    }
 
    cout << max(dp[n][0], max(dp[n][1],dp[n][2])) << "\n";
    
    return 0;
}