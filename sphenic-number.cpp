// find a number is a Sphenic number or not

#include<bits/stdc++.h>
using namespace std;

bool arr[1001];

void simpleSieve()
{
	memset(arr, true, sizeof(arr));

	for(int p = 2; (p * p) < 1001; p++)
	{
		if(arr[p])
			for(int i = (p * 2); i < 1001; i = i + p)
			arr[i] = false;
		}
	}
}

int find_sphene(int N)
{
	int arr1[8] = {0}; 
	int count = 0;	
	int j = 0;

	for(int i = 1; i <= N; i++)	
	{
		if(N % i == 0 && count < 9)	
		{
			count++;
			arr1[j++] = i;
		}
	}
	if(count == 8 && (arr[arr1[1]] && arr[arr1[2]] && arr[arr1[3]])) {
	    return 1;
    }
	return 0;
}

int main()
{
	simpleSieve();

	int n; 
    cin >> n;
	int ans = find_sphene(n);

	if(ans) {
        cout << "Yes" << endl;
    }
	else {
	    cout << "NO" << endl;
    }
}
