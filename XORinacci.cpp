Question link: -  https://codeforces.com/contest/1208/problem/A

Solution:-
  
  #include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long t;
    cin >> t;
 
    while (t--)
    {
        long n, a, b;
        cin >> a >> b >> n;
        
        if (n%3==0){
            cout<<a<<endl;
        }
        if (n%3==1){
            cout<<b<<endl;
        }
        if (n%3==2){
            cout<<(a^b)<<endl;
        }
    }
}
