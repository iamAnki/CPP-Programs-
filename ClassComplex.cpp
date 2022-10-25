#include<iostream>
using namespace std;
class complex{
	public:
	float real,imaginary;
	complex(){
		real=0;
		imaginary=0;
	}
	complex (float r,float i)
	{
		real=r;
		imaginary=i;
	}
	complex operator+(complex B){
		complex temp;
		temp.real= real + B.real;
		temp.imaginary= imaginary + B.imaginary;
		return temp;
	}
	friend void print(complex A);
};
void print(complex A){
	cout<<A.real<<"+ ";
	cout<<A.imaginary<<"i"<<endl;
}
int main()
{
	complex A(5,10);
	complex B(2,7);
	complex result;
	result=A+B;
	print(result);
	return 0;
}
