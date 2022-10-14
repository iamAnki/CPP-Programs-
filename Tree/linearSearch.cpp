#include<iostream>
using namespace std;
int linearSearch(int array[],int n, int key){
for(int i=0;i<n;i++){
    if(array[i]==key){
        return i;
    }
}
return -1;
}
int main()
{
    int n;
    int array[n];
    cout<<"Enter the size of array\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter the element you want to search";
    cin>>key;
    cout<<linearSearch(array,n,key)<<endl;

    return 0;
}