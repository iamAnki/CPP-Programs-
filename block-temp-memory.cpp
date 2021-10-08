// C++ code to demonstrate the get_temporary_buffer
// to sort an array

#include <iostream>
#include <algorithm>
#include <memory>
using namespace std;
void sorting(int b[], int n)
{
	int i, c = 0;
	for (i = 0; i < n; i++) {
		if (b[i] % 2 == 0) {
			c++;
		}
	}
	cout << "The total even numbers are: " << c << endl;
	cout << "original array :"
		<< " ";
	cout << "\n";
	for (i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	cout << "\n";
	pair<int*, ptrdiff_t> p = get_temporary_buffer<int>(10);

	// copy the contents in temporary buffer with pair
	uninitialized_copy(b, b + p.second, p.first);

	sort(p.first, p.first + p.second);

	cout << "sorted array :" << endl;
	for (i = 0; i < p.second; i++) {
		cout << p.first[i] << " ";
	}
}
// driver program to test above function
int main()
{
	int b[] = { 8, 9, 2, 1, 10, 14, 37, 18, 17, 5 };
	int n = sizeof(b) / sizeof(b[0]);
	sorting(b, n);
	return 0;
}


  // OUTPUT
  // The total even numbers are: 5
  // original array : 
  // 8 9 2 1 10 14 37 18 17 5 
  // sorted array :
  // 1 2 5 8 9 10 14 17 18 37
