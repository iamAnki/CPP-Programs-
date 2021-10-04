#include <stdio.h>

void heapSort(int [], int);

int main()
 {
    int arr[100],n,i;
    printf("Enter number of elements in Array: ");
    scanf("%d",&n);
    printf("Enter Array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    heapSort(arr, n);

    printf("Sorted array is: \n");
    for (i=0; i<n;i++)
    {
    printf("%d ", arr[i]);
    }
 }

  void heapify(int arr[], int n, int i)
  {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left<n && arr[left]>arr[largest])
    {
      largest = left;
    }

    if (right<n && arr[right]>arr[largest])
    {
      largest = right;
    }

    if (largest != i)
    {
        int temp=0;
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
  }

  void heapSort(int arr[], int n)
  {
    for (int i=n/2-1; i>=0; i--)
    {
      heapify(arr, n, i);
    }

    for (int i=n-1; i>=0; i--)
    {
        int temp=0;
        temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;

        heapify(arr, i, 0);
    }
  }
