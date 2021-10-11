#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    int N[T];
    int K[T];
    string S[T];
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d",&N[i],&K[i]);
        cin>>S[i];
    }
    for(int i=0;i<T;i++){
        int count=0;
        string a="";
        for(int p=0;p<K[i];p++){
            a=a+"*";
        }
        for(int j=0;j<=(N[i]-K[i]);j++){
            string r=S[i].substr(j,K[i]);
            if(a==r){
                count=1;
                break;
            }
        }
        if(count==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
