#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sumneg = 0;
        bool p=true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        
        if(a[i]==0){
            p=false;
        }
        else if (a[i] < 0)
        {
            sumneg = sumneg + 1;
        }
        
      
        }
          sumneg;
        if(p==false){
            cout<<"0"<<endl;
          }
        else if (sumneg % 2 == 0)
        {
            cout << "0" << endl;
        }
        else if(sumneg%2!=0)
        {
            cout << "1" << endl;
        }
    
    }
    // your code goes here
    return 0;
}
