#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void countingSort(vector<ll> &arr)
{
    // find max, min and range for counting array.
    ll maxNum = *max_element(arr.begin(), arr.end());
    ll minNum = *min_element(arr.begin(), arr.end());
    ll range = maxNum - minNum + 1;
    
    //size of array
    ll n = arr.size();
    
    vector<ll> counts(range), result(n);
    for (ll i = 0; i < n; i++){
        counts[arr[i] - minNum]++;
    }
 
    for (ll i = 1; i < counts.size(); i++){
        counts[i] = counts[i] + counts[i - 1];
    }
 
    for (ll i = n - 1; i >= 0; i--) {
        result[counts[arr[i] - minNum] - 1] = arr[i];
        counts[arr[i] - minNum]--;
    }
 
    for (ll i = 0; i < n; i++){
        arr[i] = result[i];   
    }
}

int main(){
    
    vector<ll> v = {12, 5, -6, 3, 8, 0, 18, 15, 30, 16, 87, -25, 50, 9};
    countingSort(v); // time complexity: O(n) and space complexity: O(range)
    for(auto e: v){
        cout << e << ", ";
    }
    return 0;
}