#include<iostream>
#include<string>
#include<cstring>
#include<conio.h>

using namespace std;
//bruteforce approach
int main()
{   int m,n;
    char ch1[20], ch2[20];
    cin >> m >> n;
    for(int i=0;i<m;i++){
        cin>>ch1[i];  
    }
    for(int i=0;i<n;i++){
        cin>>ch2[i];  
    }

    if(m != n)
    {
        cout<<"0";
        getch();
        return 0;
    }
    else
    {
        char rem;
        for(int i = 1; i<m; i++)
        {
            rem = ch1[m-1];
            for(int j = m-2; j>=0; j--)
            {
                ch1[j+1] = ch1[j];
            }
            ch1[0] = rem;
            if(strcmp(ch1, ch2)==0)
            {
                cout<<"1";
                getch();
                return 0;
            }
        }
    }
    cout<<"0";
    getch();
} 
