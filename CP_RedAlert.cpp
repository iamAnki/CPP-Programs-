#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int T;
    cin>>T;
    int H,N,D;
    for(int i=0;i<T;i++){
        int l=0;
        int count=0;
        cin>>N>>D>>H;
        int A[N]={};
        string S[N]={};
        for(int j=0;j<N;j++){
            cin>>A[j];
        }
        for(int j=0;j<N;j++){
            if(A[j]>0){
                l=l+A[i];
            }
            else if(A[j]==0){
                if(l>D){
                    l=l-D;
                }
                else{
                    l=0;
                }
            }
            
            if(l>H){
                count=count+1;
            }
        }
        if(count>0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}
