// problem link - https://codeforces.com/contest/1598/problem/D

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
#define ll long long
const ll N=1e5+5;
const ll p=998244353;
 
void ajayrajsingh(){
    long long int number;
    cin >> number;
    vector<long long int> ajay[number];
    vector<long long int> raj[number];
    for(long long int i=0; i<number; i++){
        long long int araj, asingh;
        cin >> araj >> asingh;
        ajay[araj-1].push_back(asingh-1);
        raj[asingh-1].push_back(araj-1);
    }
    long long int count=(number*(number-1)*(number-2))/6;
    for(long long int i=0; i<number; i++){
 
        for(auto j:raj[i]){
            long long int rajsingh = ((raj[i].size()-1)*(ajay[j].size()-1));
            count = count - rajsingh;
        }
    }
    cout<< count <<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int tc = 1;
    cin >> tc;
    while(tc--){
        ajayrajsingh();
    }
    return 0;
}
