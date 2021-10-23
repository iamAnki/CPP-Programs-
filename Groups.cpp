// problem link - https://codeforces.com/contest/1598/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FRIEND1 ios_base::sync_with_stdio(false);
#define FRIEND2 cin.tie(NULL);
const long long int R=1e5+5;
const long long int q=998244353;
 
 
void ajayrajsingh(){
    int number;
    cin>>number;
    int ajayraj[number][5];
    for(int i=0;i<number;i++){
        for(int j=0;j<5;j++)
            cin>>ajayraj[i][j];
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            int ajay=0,raj=0,singh=0;
            for(int k=0;k<number;k++){
                if(ajayraj[k][i]==1)
                    ajay++;
                if(ajayraj[k][j]==1)
                    raj++;
                if(ajayraj[k][j]==1 && ajayraj[k][i]==1)
                    singh++;
            }
            ajay-=singh;
            raj-=singh;
            if(ajay<=number/2 && raj<=number/2 && ajay+raj+singh==number){
                cout<<"YES \n";
                return;
            }
        }
    }
    cout<<"NO \n";
}
 
int main(){
    FRIEND1;
    FRIEND2;
    long long int tc=1;
    cin>>tc;
    while(tc--){
        ajayrajsingh();
    }
    return 0;
}
