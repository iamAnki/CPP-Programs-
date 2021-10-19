#include<bits/stdc++.h>
#include<string>
#include<set>
#include<cstring>
using namespace std;
int main(){
    char s1[1002];
    set<char> se;
    gets(s1);
    for (int i = 0; i < strlen(s1); i++)
    {
        if(s1[i]>='a'&& s1[i]<='z'){
            if(se.find(s1[i])==se.end()){
                se.insert(s1[i]);
                

            }
        }

    }
    cout<<se.size()<<endl;
    return 0;
}