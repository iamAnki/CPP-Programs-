// Heap Implementation: Implement a binary min-heap or max-heap data structure from scratch, and write functions for insertion, deletion, and heapify operations.

#include <iostream>
#include <vector>

using namespace std;

class MinHeap {
private:
    vector<int> heap;

    // Helper function to heapify a subtree rooted at a given index
    void heapify(int index) {
        int smallest = index;
        int left_child = 2 * index + 1;
        int right_child = 2 * index + 2;

        // Find the smallest among the node, its left child, and its right child
        if (left_child < heap.size() && heap[left_child] < heap[smallest]) {
            smallest = left_child;
        }
        if (right_child < heap.size() && heap[right_child] < heap[smallest]) {
            smallest = right_child;
        }

        // If the smallest element is not the current node, swap them and continue heapifying
        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            heapify(smallest);
        }
    }

public:
    // Constructor
    MinHeap() {}

    // Insert an element into the heap
    void insert(int value) {
        heap.push_back(value);
        int index = heap.size() - 1;

        // Heapify the element up to its correct position
        while (index > 0 && heap[(index - 1) / 2] > heap[index]) {
            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    // Delete the minimum element (root) from the heap
    void deleteMin() {
        if (heap.empty()) {
            cerr << "Heap is empty. Cannot delete." << endl;
            return;
        }

        // Replace the root with the last element, and then heapify
        heap[0] = heap.back();
        heap.pop_back();
        heapify(0);
    }

    // Get the minimum element (root) of the heap
    int getMin() {
        if (heap.empty()) {
            cerr << "Heap is empty." << endl;
            return INT_MAX;
        }
        return heap[0];
    }

    // Print the heap
    void printHeap() {
        for (int value : heap) {
            cout << value << " ";
        }
        cout << endl;
    }
};

int main() {
    MinHeap minHeap;

    // Test insertion
    minHeap.insert(5);
    minHeap.insert(3);
    minHeap.insert(8);
    minHeap.insert(1);
    minHeap.insert(7);

    cout << "Heap after insertions: ";
    minHeap.printHeap(); // Should print 1 3 8 5 7

    // Test getMin
    cout << "Minimum element: " << minHeap.getMin() << endl; // Should print 1

    // Test deleteMin
    minHeap.deleteMin();
    cout << "Heap after deleting minimum: ";
    minHeap.printHeap(); // Should print 3 5 8 7

    return 0;
}
