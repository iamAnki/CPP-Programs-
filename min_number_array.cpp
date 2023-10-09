// To find the minimum number in an array in C++, you can use a simple loop to iterate through the array and keep track of the minimum value encountered so far. Here's a C++ program to find the minimum number in an array with test cases:

#include <iostream>
#include <climits> // For INT_MAX

using namespace std;

int findMinimum(int arr[], int size) {
    if (size == 0) {
        cerr << "Error: Empty array passed to findMinimum()" << endl;
        return INT_MAX; // Return a large value to indicate an error
    }

    int minimum = arr[0]; // Initialize the minimum with the first element

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minimum) {
            minimum = arr[i]; // Update the minimum if a smaller element is found
        }
    }

    return minimum;
}

int main() {
    // Test cases
    int arr1[] = {5, 2, 8, 1, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Minimum in arr1: " << findMinimum(arr1, size1) << endl;

    int arr2[] = {10, 20, 30, 40, 50};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Minimum in arr2: " << findMinimum(arr2, size2) << endl;

    int arr3[] = {99, 88, 77, 66, 55};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Minimum in arr3: " << findMinimum(arr3, size3) << endl;

    int arr4[] = {42};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    cout << "Minimum in arr4: " << findMinimum(arr4, size4) << endl;

    int arr5[] = {};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    cout << "Minimum in arr5: " << findMinimum(arr5, size5) << endl;

    return 0;
}
