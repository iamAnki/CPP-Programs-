//program to check if two strings are anagrams of each other

#include <bits/stdc++.h>
using namespace std;
#define N 256

bool checkanagram(string str1, string str2)
{
	int count[N] = { 0 };
	int i;

	for (i = 0; str1[i] && str2[i]; i++) {
		count[str1[i]]++;
		count[str2[i]]--;
	}

	if (str1[i] || str2[i])
		return false;

	for (i = 0; i < N; i++)
		if (count[i])
			return false;
	return true;
}

int main()
{
	char str1[] = "helloworld";
	char str2[] = "lwdolorehl";

	// Function call
	if (checkanagram(str1, str2))
		cout << "Anagram";
	else
		cout << "Not Anagram";

	return 0;
}
