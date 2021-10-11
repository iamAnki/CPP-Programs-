#include<iostream>
using namespace std;
int calc(int n, int power)
{
	int product=1;
	for(int i=0;i<power;i++)
	{
	   product*=n;
	}
	return product;
}
int main()
{
	int i,count=0,rem,sum=0;
	cout<<"Enter a number";
	cin>>i;
	int num=i;
	//count digits in number
	while(i>0)
	{
		i=1/10;
		count++;
	}
	i=num;
	while(i>0)
	{
		rem=i%10;
		sum=sum+calc(rem,count);//calculate power of rem
		i=i/10;
	}
	if(num==sum)
		cout<<"\nArmstrong number!";
	else
		cout<<" \n Not an Armstrong Number!";
	return 0;
}
