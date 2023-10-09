// Kth Largest Element: Given an array of integers, find the Kth largest element using a min-heap or max-heap.

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int> > min_heap; // Use a min-heap

    // Build a min-heap with the first K elements
    for (int i = 0; i < k; ++i) {
        min_heap.push(nums[i]);
    }

    // Continue processing the remaining elements
    for (int i = k; i < nums.size(); ++i) {
        if (nums[i] > min_heap.top()) {
            min_heap.pop(); // Remove the smallest element from the heap
            min_heap.push(nums[i]); // Insert the larger element
        }
    }

    return min_heap.top(); // The top of the min-heap is the Kth largest element
}

int main() {
    // Test cases
    int arr1[] = {3, 2, 1, 5, 6, 4};
    vector<int> vec1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    int k1 = 2;
    cout << "Kth largest in arr1: " << findKthLargest(vec1, k1) << endl;

    int arr2[] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    vector<int> vec2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
    int k2 = 4;
    cout << "Kth largest in arr2: " << findKthLargest(vec2, k2) << endl;

    int arr3[] = {1};
    vector<int> vec3(arr3, arr3 + sizeof(arr3) / sizeof(arr3[0]));
    int k3 = 1;
    cout << "Kth largest in arr3: " << findKthLargest(vec3, k3) << endl;

    return 0;
}

