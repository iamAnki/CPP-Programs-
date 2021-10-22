// C++ program to Count Inversions in an array
#include <bits/stdc++.h>

using namespace std;

int getInvCount(int arr[], int n)
{
	int inv_count = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j])
				inv_count++;

	return inv_count;
}

// Driver Code
int main()
{
	int arrary[] = { 1, 20, 6, 4, 5 };
	int size = sizeof(array) / sizeof(array[0]);
	cout << " Number of inversions are "<< getInvCount(array, size);
  
	return 0;
}
