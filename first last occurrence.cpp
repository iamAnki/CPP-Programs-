#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int k)
{
    int l = 0;
    int h = n - 1;
    int mid = l + (h - l) / 2;
    int ans = -1;
    while (l <= h)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            h = mid - 1;
        }
        else if (k > arr[mid])
        {
            l = mid + 1;
        }
        else if (k < arr[mid])
        {
            h = mid - 1;
        }
        mid = l + (h - l) / 2;
    }
    return ans;
}
int lastocc(int arr[], int n, int k)
{
    int l = 0;
    int h = n - 1;
    int mid = l + (h - l) / 2;
    int ans = -1;
    while (l <= h)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (k > arr[mid])
        {
            l = mid + 1;
        }
        else if (k < arr[mid])
        {
            h = mid - 1;
        }
        mid = l + (h - l) / 2;
    }
    return ans;
}

int main()
{
    int even[6] = {1, 2, 3, 3, 3, 5};
    cout << "First occurrence of 3 is " << firstocc(even, 6, 3) << endl;
    cout << "last occurrence of 3 is " << lastocc(even, 6, 3);

    return 0;
}
