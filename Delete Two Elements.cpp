// Problem link - https://codeforces.com/contest/1598/problem/C

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
#define ll long long
const ll N=1e5+5;
const ll p=998244353;
 
 
void ajayrajsingh(){
    int number;
    cin >> number;
    int ajayraj[number];
    long long int summation = 0;
    map<int,int> rajsingh;
    for(int i=0; i<number; i++){
        cin >> ajayraj[i];
        summation = summation + ajayraj[i];
    }
    summation = summation * 2;
    if(summation%number != 0){
        cout<< 0 <<endl;
        return;
    }
    summation = summation / number;
    long long int count = 0;
    for(int i=0; i<number; i++){
        int x = summation-ajayraj[i];
        count = count + rajsingh[x];
        rajsingh[ajayraj[i]]++;
    }
    cout<< count <<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int arsa = 1;
    cin >> arsa;
    while(arsa--){
        ajayrajsingh();
    }
}
