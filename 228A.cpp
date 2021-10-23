#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    unsigned int inp[4],k=0;
    for (int i = 0; i < 4; i++){
        cin>>inp[i];
    }
    sort(inp,inp+4);
    for(int i=0;i<3;i++){
        if(inp[i]==inp[i+1]) k++;
    }   
    cout<<k;
    return 0;
}