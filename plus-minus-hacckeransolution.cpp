#include <bits/stdc++.h>
using namespace std;
 int p=0;int m=0;int z=0;
int main()
{  int n;
 cin>>n;
 int ar[n];
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
     
 }  
    for(int i=0;i<n;i++)
    {   if(ar[i]>0)
        p++;
     else if(ar[i]<0)
     m++;
     
     else z++;
           
    }
 double a1,a2,a3;
 a1=double(p)/double(n);a2=double(m)/double(n);a3=double(z)/double(n);
 cout<<a1<<"\n"<<a2<<"\n"<<a3;
         
    return 0;
}
