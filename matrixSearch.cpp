
#include<bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, m;
    cin>>n>>m;
    int target;
    cin>>target;
    int m1[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>m1[i][j];
        }
    }

    int r=0, c=m-1;
    bool found = false;
    while(r<n and c>=0){
        if(m1[r][c] == target){
            found=true;
        }
        if(m1[r][c] > target){
            c--;
        }
        else{
            r++;
        }

    }    

    if(found){
        cout<<"Element found\n";
    }
    else {
        cout<<"Element not found\n";
    }
    
     
    return 0;
}