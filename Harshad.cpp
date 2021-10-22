#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,sum=0;
   cout<<"Enter the number:";
   cin>>n;
   int r=n;
   while(r>0){
   int m=r%10;
   sum+=m;
   r=r/10;}
   if(n%sum==0){
       cout<<"Yes, "<<n<<" is a Harshad number";
   }
   else
   cout<<"No, "<<n<<" is not a harshad number";
}
