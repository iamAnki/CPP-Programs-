// #include<iostream>
// using namespace std;
// int main(){
    
//     int t;
//     cin>>t;
//     while(t--){
//         long long int a,b,c,m;
//         cin>>a>>b>>c>>m;
        
//         if(a>=0){
//             a--;
//         }
//         if(b>=0){
//             a--;
//         }
//         if(c>=0){
//             a--;
//         }
//         int r=a+b+c;
//         if(r>=m){
//             cout<<"YES";

//         }
//         else
//         cout<<"NO";

//         cout<<endl;
//     }
//     return 0;

// }



























//🎃🎃🎃😎😎😁🤓☣☣☣☣☣dark_coder☣☣☣☣☣🤓😁😎😎🎃🎃🎃
#include <bits/stdc++.h>
using namespace std;
#define IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define li long long int
#define pi pair<int,int>
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,m;
        cin>>a>>b>>c>>m;
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        c=arr[2];
        b=arr[0];
        a=arr[1];
        if(c-(a+b+1)<=m&&m<=a+b+c-3)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }

    return 0;
}