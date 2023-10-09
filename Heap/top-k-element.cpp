// Top K Elements: Given an array of integers, find the top K elements using a min-heap or max-heap.

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> findTopK(vector<int>& nums, int k) {
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

    vector<int> topK;
    while (!min_heap.empty()) {
        topK.push_back(min_heap.top());
        min_heap.pop();
    }

    return topK;
}

int main() {
    // Test cases
    int arr1[] = {3, 2, 1, 5, 6, 4};
    vector<int> arr1Vec(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    int k1 = 3;
    vector<int> topK1 = findTopK(arr1Vec, k1);
    cout << "Top " << k1 << " elements in arr1: ";
    for (int num : topK1) {
        cout << num << " ";
    }
    cout << endl;

    int arr2[] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    vector<int> arr2Vec(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
    int k2 = 4;
    vector<int> topK2 = findTopK(arr2Vec, k2);
    cout << "Top " << k2 << " elements in arr2: ";
    for (int num : topK2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
