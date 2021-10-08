#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*

 Contributor:Ankit Bhujeja
 Problem statement: https://www.hackerrank.com/challenges/vector-sort/problem
*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      int n;             //Length of a vector
      cin>>n;
      vector<int> v;      //Declaring a vector
      int a;
       for(int i=0;i<n;i++)
        {
                 cin>>a;
                  v.push_back(a);        //Inserting elements into vector
        }  
  
        sort(v.begin(),v.end());       //Sort(Starting iterator,Ending Iterator)
  
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";           // Printing the sorted vector
        }
        return 0;
}
