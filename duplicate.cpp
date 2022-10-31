# include <iostream>
#include <map>
using namespace std;
bool check(int arr[],int n){
  map<int,int> mp;
  for(int i=0;i<n;i++){
  mp[arr[i]]++;
    if(mp[arr[i]]>1)  return true;
  }
  return false;
}
int main() {
    // your code here
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
  cin>>arr[i];
  }
  if(check(arr,n)== true){
    cout<<"true";
  }
  else{
      cout<<"false";
  }
    return 0;
}
