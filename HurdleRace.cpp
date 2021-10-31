// https://www.hackerrank.com/challenges/the-hurdle-race

#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    for(int i = 0; i<n;i++){
        maxi = max(maxi, arr[i]);
    }
    if (maxi > k){
        cout << maxi - k;
    }
    else{
        cout << 0;
    }
    return 0;
}
