// Heap Sort: Write a C++ program to sort an array of integers using the heap sort algorithm.

#include <iostream>
#include <vector>

using namespace std;

// Function to heapify a subtree rooted at index i in a max-heap
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Function to perform heap sort (ascending order)
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Build a max-heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements from the heap one by one
    for (int i = n - 1; i > 0; i--) {
        // Move the current root to the end
        swap(arr[0], arr[i]);

        // Call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    // Test cases
    int arr1[] = {5, 2, 8, 1, 6};
    vector<int> vec1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    heapSort(vec1);
    cout << "Sorted arr1: ";
    for (int num : vec1) {
        cout << num << " ";
    }
    cout << endl;

    int arr2[] = {10, 20, 30, 40, 50};
    vector<int> vec2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
    heapSort(vec2);
    cout << "Sorted arr2: ";
    for (int num : vec2) {
        cout << num << " ";
    }
    cout << endl;

    int arr3[] = {99, 88, 77, 66, 55};
    vector<int> vec3(arr3, arr3 + sizeof(arr3) / sizeof(arr3[0]));
    heapSort(vec3);
    cout << "Sorted arr3: ";
    for (int num : vec3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
