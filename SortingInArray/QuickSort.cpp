#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int arr[],int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int partition_array(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            
        
        i++;
        
        
        swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[i + 1], &arr[high]);
    
    
    return (i + 1);
    }

    void quickSort(int arr[], int low, int high) {
    if (low < high) {
        
        
        int pi = partition_array(arr, low, high);

        
        quickSort(arr, low, pi - 1);

        
        quickSort(arr, pi + 1, high);
    }
    }


int main() {
    int data[] = {8,10,20,39,54,34,3,5,4, 7, 6, 1, 0, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array: \n";

    print_array(data, n);
    quickSort(data, 0, n - 1);

    cout << "Sorted array in ascending order: \n";
    print_array(data, n);
}