
#include <bits/stdc++.h>
using namespace std;

const int maximum = 1000;


int lcs(string X, string Y, int m, int n, int dp[][maximum])
{
	
	if (m == 0 || n == 0)
		return 0;

	
	if (dp[m - 1][n - 1] != -1)
		return dp[m - 1][n - 1];

	
	if (X[m - 1] == Y[n - 1]) {

		
		dp[m - 1][n - 1] = 1 + lcs(X, Y, m - 1, n - 1, dp);

		return dp[m - 1][n - 1];
	}
	else {

		
		dp[m - 1][n - 1] = max(lcs(X, Y, m, n - 1, dp),
							lcs(X, Y, m - 1, n, dp));

		return dp[m - 1][n - 1];
	}
}


int main()
{

	string X = "AGGTAB";
	string Y = "GXTXAYB";
	int m = X.length();
	int n = Y.length();

	int dp[m][maximum];

	
	memset(dp, -1, sizeof(dp));

	cout << "Length of LCS: " << lcs(X, Y, m, n, dp);

	return 0;
}
