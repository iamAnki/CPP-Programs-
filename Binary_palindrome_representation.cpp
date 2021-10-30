// C++ Program to Check if binary representation
// of a number is palindrome
#include<iostream>
using namespace std;

// This function returns true if k'th bit in x
// is set (or 1). For example if x (0010) is 2
// and k is 2, then it returns true
bool isKthBitSet(unsigned int x, unsigned int k)
{
	return (x & (1 << (k - 1))) ? true : false;
}

// This function returns true if binary
// representation of x is palindrome.
// For example (1000...001) is palindrome
bool isPalindrome(unsigned int x)
{
	int l = 1; // Initialize left position
	int r = sizeof(unsigned int) * 8; // initialize right position

	// One by one compare bits
	while (l < r)
	{
		if (isKthBitSet(x, l) != isKthBitSet(x, r))
			return false;
		l++; r--;
	}
	return true;
}

// Driver Code
int main()
{
	unsigned int x = 1 << 15 + 1 << 16;
	cout << isPalindrome(x) << endl;
	x = 1 << 31 + 1;
	cout << isPalindrome(x) << endl;
	return 0;
}
