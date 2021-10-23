#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int n,temp;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        if(temp<3){
            cout<<0<<endl;
        }
        else{
            if(temp%2==0){
                cout<<(temp/2)-1<<endl;
            }
            else{
                cout<<temp/2<<endl;
            }
        }
    }
    
    return 0;
}