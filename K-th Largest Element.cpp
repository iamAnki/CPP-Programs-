#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
// Function to find the k'th largest element in an array using min-heap
int findKthLargest(vector<int> const &arr, int k)
{
    
    if (arr.size() < k) {
        exit(-1);
    }
 
   

    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.begin() + k);
 
    // do for remaining array elements
    for (int i = k; i < arr.size(); i++)
    {
        // if the current element is more than the root of the heap
        if (arr[i] > pq.top())
        {
            // Replace root with the current element
            pq.pop();
            pq.push(arr[i]);
        }
    }
 
   
    return pq.top();
}
 
int main()
{
    vector<int> arr = { 7, 4, 6, 3, 9, 1 };
    int k = 2;
 
    cout << "k'th largest array element is " << findKthLargest(arr, k);
 
    return 0;
}
