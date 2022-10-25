void search(char *pat, char *txt, int *suffArr, int n){
	int m = strlen(pat); 
	int l = 0, r = n-1;
	while (l <= r){
		int mid = l + (r - l)/2;
		int res = strncmp(pat, txt+suffArr[mid], m);
		if (res == 0){
			cout << "Pattern found at index " << suffArr[mid];
			return;
		}
		if (res < 0) r = mid - 1;
		else l = mid + 1;
	}
	cout << "Pattern not found";
}

int main(){
	char txt[] = "banana"; 
	char pat[] = "nan"; 
	int n = strlen(txt);
	int *suffArr = buildSuffixArray(txt, n);
	search(pat, txt, suffArr, n);
	return 0;
}
