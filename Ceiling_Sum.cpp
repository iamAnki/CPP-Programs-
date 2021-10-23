#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    int i;
     
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int T;
    cin>>T;
    int A,B,Z;
    for(int i=0;i<T;i++){
        cin>>A>>B;
        Z=abs(B-A)+1;
        int S[Z]={};
        int a=0;
        float f1;
        float f2;
        if(A<=B){
            for(int j=A;j<=B;j++){
                f1=float(B-j)/2;
                f2=float(j-A)/2;
                int X= ceil(f1)+ceil(f2);
                S[a]=X;
                a=a+1;
                
            }
        }
        else{
            for(int j=A;j>=B;j--){
                f1=float(B-j)/2;
                f2=float(j-A)/2;
                int X= ceil(f1)+ceil(f2);
                S[a]=X;
                a=a+1;
            }
        }
        int n = sizeof(S)/sizeof(S[0]);
        cout<<largest(S,n)<<"\n";
    
    }    
    return 0;
}
