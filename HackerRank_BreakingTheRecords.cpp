#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	cin >> arr[0];
	int low = arr[0], max = arr[0];
	int countLow = 0,countMax=0;
	for(int i = 1 ; i < n; i++){
		cin >> arr[i];
		int input = arr[i];
		if(input < low){
			low = arr[i];
			countLow++;
		}else if(input > max){
			max = arr[i];
			countMax++;
		}
	}
	cout << countMax << " " << countLow<< endl;
	return 0;
}
