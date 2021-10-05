//Hacktober fest 2021 PR submition
// author : @prateek11rai




#include<bits/stdc++.h>
using namespace std;



string Duplicate(string s){
    // base case
    if(s.length()==0){
        return "";
    }
    // storing the first letter everytime
    char c=s[0];
    string ans = Duplicate(s.substr(1));
    // substring starts from index 1
    if(c==ans[0]){
        return ans;
    }
    else{
        return (c+ans);
    }
}


int main(){

    string str;
    cout<<"Enter the string with duplicate characters : ";
    // e.g. : aaaaabbbbbbcccccddd
    cin>>str;
    cout<<endl;
    cout<<"String after removal of duplicates : ";
    cout<<Duplicate(str)<<endl;
    return 0;
}