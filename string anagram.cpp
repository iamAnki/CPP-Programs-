#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
    int i,c[26]={0},c1[26]={};
    for(i=0;i<a.length();i++)
        {
        if(97<=a[i]&&a[i]<=123)
            c[a[i]-97]++;
    }
    for(i=0;i<b.length();i++)
        {
        if(97<=b[i]&&b[i]<=123)
            c1[b[i]-97]++;
    } 
    int s=0;
    for(i=0;i<26;i++)
    {
        s=s+abs(c[i]-c1[i]);
        
    }   
    
    return (s);
    
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
