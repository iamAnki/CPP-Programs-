#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,arr[100],i=0;
   cout<<"Enter the number:";
   cin>>n;
  while(n>0){
      arr[i]=n%2;
      n=n/2;
      i++;
  }
   cout<<"Binary number is:";
   for(int j=i-1;j>=0;j--){
       cout<<arr[j]<<",";
   }
}
