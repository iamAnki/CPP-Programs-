// Switch cases provided to choose between heap sort, quick sort and merge sort to sort an array of n numbers.

#include <iostream>
#include<cmath>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    cout<<"The Sorted Array is:";
    for(int i =0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n \n";
}

void heapify(int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 

    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
    printArray(arr,n);
}

void merge(int arr[],int first,int mid,int last){
  auto *b = new int[last-first+1];
    int i , j , k;
    k = 0;
    i = first;
    j = mid+1;
    while(i <= mid && j <= last){
        if(arr[i]<arr[j]){
            b[k++] = arr[i++];
        }
        else{
            b[k++] = arr[j++];
        }
    }
    while(i <= mid){
        b[k++] = arr[i++];
    }
    while(j <= last){
        b[k++] = arr[j++];
    }
     i=0;
     j=0;
    for(j=first;j<=last;j++)
        arr[j]=b[i++];

    delete[] b;
}

void mergesort(int arr[], int first, int last){
    int mid;
    if(first < last){
        mid = floor((first+last)/2);
        mergesort(arr,first,mid);
        mergesort(arr,mid+1,last);
        merge(arr,first,mid,last);
    }
}

void quicksort(int arr[],int first,int last)
{
    
    int i,j,pivot,temp;
    if(first<last)
    {
        pivot = first;
        i= first+1;
        j=last;
        while(i<j)
        {
            while(arr[i]<=arr[pivot]&&i<last)
            {
                i++;
            }
            while(arr[j]>=arr[pivot])
            {
                j--;
            }
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp = arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
        
        quicksort(arr,first,j-1);
        quicksort(arr,j+1,last);
    }
 
}


int main()
{
    int n;
    cout<<"Enter the number of elements of array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:\n";
    for(int i = 0; i<n; i++){
       cin>>arr[i];
    }
   int c;
   do{
       cout<<"enter \n 1 to do heap sort \n 2 to do merge sort \n 3 to do quick sort \n 4 to print array\n";
       cin>>c;
       switch(c)
            {
                case 1:heapSort(arr,n);
                break;
                
                case 2:mergesort(arr,0,n-1);
                break;
                
                case 3:quicksort(arr,0,n-1);
                break;
                
                case 4:printArray(arr,n);
                break;
            
                default:printf("please choose the valid option.");
            }
        
   }while(1);
   return 0;
}
