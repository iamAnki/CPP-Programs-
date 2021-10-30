#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int p,t,n,b,a,c,d,i,k,f;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b>>c;
        d=a;
        if(b>d){
            d=b;
        }
        if(c>d){
            d=c;
        }
        if(a==b && a==c){
            cout<<"1 1 1";
        }
        else if(a==b && a==d || b==c && b==d|| c==a && c==d){
            if(a==d){
                cout<<"1 ";
            }
            else{
                cout<<d-a+1<<" ";
            }
            if(b==d){
                cout<<"1 ";
            }
            else{
                cout<<d-b+1<<" ";
            }
            if(c==d){
                cout<<"1 ";
            }
            else{
                cout<<d-c+1<<" ";
            }
        }
        else{
            if(a==d){
                cout<<"0 ";
            }
            else{
                cout<<d-a+1<<" ";
            }
            if(b==d){
                cout<<"0 ";
            }
            else{
                cout<<d-b+1<<" ";
            }
            if(c==d){
                cout<<"0 ";
            }
            else{
                cout<<d-c+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}