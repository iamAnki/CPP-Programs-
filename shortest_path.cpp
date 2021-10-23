#include<iostream>
#define inf 999;
using namespace std;
int arr[30][20];
int arr_2[30][20];
int n;
void input_matrix(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
}
void shortest_path(){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==0){
            arr_2[i][j]=inf;
        }
        else{
            arr_2[i][j]=arr[i][j];
        }
    }
  }
  for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr_2[i][j]=min(arr_2[i][j],(arr_2[i][k]+arr_2[k][j]));
        }
    }
  }
}
void output_matrix(){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr_2[i][j]<<" ";
    }
    cout<<endl;
}
}
int main(){
   // int n,m;
 cin>>n;
 input_matrix(n);
 shortest_path();
output_matrix();
}
