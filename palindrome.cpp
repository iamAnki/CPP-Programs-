// Palindrome in cpp

#include <iostream>
// #include<vector>
#include<algorithm>
using namespace std;

string ispalindrome(string A){
    string P=A;
    reverse(P.begin(),P.end());
    if(P==A){
        return "Yes";
    }
    else {
        return "No";
    }

}

int main(){
    string A;
    cout<<"Type the string"<<endl;
    cin>>A;
    cout<<ispalindrome(A);
    return 0;
}