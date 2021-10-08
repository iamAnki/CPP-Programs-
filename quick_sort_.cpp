// C++ implementation QuickSort using Lomuto's partition Scheme.
#include <bits/stdc++.h>
using namespace std;

// This function takes last element as pivot, places
// the pivot element at its correct position in sorted array, and
// places all smaller (smaller than pivot) to left of pivot and 
// all greater elements to right of pivot
int partition(int arr[], int low, int high)
{
	// pivot
	int pivot = arr[high];

	// Index of smaller element
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or equal to pivot
		if (arr[j] <= pivot) {
			// increment index of smaller element
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

// Generates Random Pivot, swaps pivot with
// end element and calls the partition function
int partition_r(int arr[], int low, int high)
{
	// Generate a random number in between low .. high
	srand(time(NULL));
	int random = low + rand() % (high - low);

	// Swap A[random] with A[high]
	swap(arr[random], arr[high]);

	return partition(arr, low, high);
}

/* The main function that implementsQuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		/* pi is partitioning index which indicate the index where we break the array into two parts */
		int pi = partition_r(arr, low, high);

		// recusively calling the function for two halves
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}


// Driver Code
int main()
{
	int arr[] = { 11, 19, 0, 20, 2, 15 };
	int n = sizeof(arr) / sizeof(arr[0]);
  //calling the Sorting function
	quickSort(arr, 0, n - 1);
  //Printing the Sorted Values
	printf("Sorted array: \n");
	for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
	return 0;
}


//time Complexity: O(nlogn)
