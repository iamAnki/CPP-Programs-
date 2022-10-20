

#include <bits/stdc++.h>
using namespace std;

int SrMin(int arr[], int l, int h)
{

    if (h < l)
        return arr[0];

    if (h == l)
        return arr[l];

    int mid = l + (h - l) / 2; /*(l + h)/2;*/

    if (mid < h && arr[mid + 1] < arr[mid])
        return arr[mid + 1];

    if (mid > l && arr[mid] < arr[mid - 1])
        return arr[mid];

    if (arr[h] > arr[mid])
        return SrMin(arr, l, mid - 1);
    return SrMin(arr, mid + 1, h);
}

int main()
{
    int arr[] = {5, 6, 1, 2, 3, 4};
    int N = sizeof(arr) / sizeof(arr[0]);

    cout << "The minimum element is "
         << SrMin(arr, 0, N - 1) << endl;

    return 0;
}
