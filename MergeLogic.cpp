#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){ 
    int n,m;cin>>n>>m;
    int arr1[n+1],arr2[m+1];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int arr_merged[n+m+2];
    int ptr1=0,ptr2=0,ptr=0;
    while(ptr1<n&&ptr2<m){
        if(arr1[ptr1]<=arr2[ptr2]){
            arr_merged[ptr]=arr1[ptr1];
            ptr++;
            ptr1++;
        }else{
            arr_merged[ptr]=arr2[ptr2];
            ptr++;
            ptr2++;
        }
    }
    while(ptr1<n){
        arr_merged[ptr]=arr1[ptr1];
        ptr++;
        ptr1++;
    }
    while(ptr2<m){
        arr_merged[ptr]=arr2[ptr2];
        ptr++;
        ptr2++;
    }

    for(int i=0;i<n+m;i++){
        cout<<arr_merged[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
