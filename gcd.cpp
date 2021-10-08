#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0){return b;}
    else if(b==0){return a;}
    else{
        return gcd(b,a%b);
    }
}
int gcdn(int arr[], int n){
    int g=arr[0]; int res=0;
    for(int i=1;i<n;i++){
        res=gcd(g,arr[i]);
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<”ANSWER”<<gcdn(arr,n);
}
