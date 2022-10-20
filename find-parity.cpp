
# include<bits/stdc++.h>
# define bool int
using namespace std;

bool getParity(unsigned int n)
{
	return __builtin_parity(n);
}

int main()
{
	unsigned int n = 7;
	cout<<"Parity of no "<<n<<" = "<<(getParity(n)? "odd": "even");
	
	getchar();
	return 0;
}

