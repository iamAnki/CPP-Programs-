#include <iostream>
#include <vector>
#include <algorithm>

using std:: vector;
using std:: cin;
using std:: cout;


long long MaxPairwiseProduct(const vector<long long> &numbers)
{
    long long max_product = 0;
    long long n = numbers.size();
    int i,j ;
    int max_index1 = -1, max_index2 = -1;

    for (i = 0; i < n; ++i)
    {
      if ((max_index1 == -1) || numbers[i] > numbers[max_index1])
            max_index1 = i;
    }
    for (j = 0; j < n; ++j)
      {
         if ((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
        max_index2 = j;
      }
    max_product = numbers[max_index1] * numbers[max_index2];
    return max_product;
}
//if(maxind1!=j && (maxind2==-1 || numbers[j]>numbers[maxind2]))
int main()
{
    int n;
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }
    cout << MaxPairwiseProduct(numbers)<< "\n";
    return 0;
}
