#include<iostream>
using namespace std;
int n,j,temp,hold_index;
int arr[30];
void selection_array(){
    for(int i=0;i<n-1;i++){
            temp=arr[i]; hold_index=i;
       for(j=i+1;j<n;j++){
          if(arr[j]<=arr[i]){
            hold_index=j;
            temp=arr[j];
          }
       }
       //swapping
int t=arr[hold_index];
       arr[hold_index]=arr[i];
       arr[i]=t;
    }
}
int main()
{
  cout<<"enter the size of array";
cin>>n;
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
   cin>>arr[i];
}
selection_array();
for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
}
}
