//Problem Statement:
// Given an array, print the Next Smaller Element (NSE) for every element.
// The NSE for an element x is the first smaller element on the right side of x in array. 
// Elements for which no smaller element exist (on right side), consider NSE as -1. 

#include <bits/stdc++.h>
using namespace std;
 
// prints NSE for elements of array arr[] of size n
 
void printNSE(int arr[], int n)
{
    stack<pair<int, int> > s;
    vector<int> ans(n);
 
    // iterate for rest of the elements
    for (int i = 0; i < n; i++) {
        int next = arr[i];
 
        // if stack is empty then this element can't be NSE
        // for any other element, so just push it to stack
        // so that we can find NSE for it, and continue
        if (s.empty()) {
            s.push({ next, i });
            continue;
        }
 
        // while stack is not empty and the top element is
        // greater than next
        //  a) NSE for top is next, use top's index to
        //    maintain original order
        //  b) pop the top element from stack
 
        while (!s.empty() && s.top().first > next) {
            ans[s.top().second] = next;
            s.pop();
        }
 
        // push next to stack so that we can find NSE for it
 
        s.push({ next, i });
    }
 
    // After iterating over the loop, the remaining elements
    // in stack do not have any NSE, so set -1 for them
 
    while (!s.empty()) {
        ans[s.top().second] = -1;
        s.pop();
    }
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ---> " << ans[i] << endl;
    }
}
 
// Driver program to test above functions
int main()
{
    int arr[] = { 11, 13, 21, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printNSE(arr, n);
    return 0;
}
