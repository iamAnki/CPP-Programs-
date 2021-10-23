#include<iostream>
using namespace std;


 int main(){
     int a[]={3,54,1,13,2,12};
     int n=6;
     int indMin,temp;
     
     cout<<"Before sorting : ";
     for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
     
    // selection sorting
    
    for(int i=0;i<n-1;i++){
        indMin=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[indMin]){
                indMin=j;
            }
        }
        temp=a[i];
        a[i]=a[indMin];
        a[indMin]=temp;
    }
    
     cout<<endl<<"After sorting : ";
     for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
    
     
 }