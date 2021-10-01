#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

class Vector{
	// Data Members
	int *arr;
	int cs;
	int ms;
	
	// Constructor and Destructor
public:
	Vector(int max_size=1){
		cs=0; // Current size
		ms=max_size; // Maximum Size
		arr = new int[ms]; // New array of size ms
	}	
	void push_back(const int d){
		// Two cases
		if(cs==ms)
		{
			// Creating an old Pointer to point to the present array
			int *oldArr=arr; 
			// Doubling the size of the array and creating the array
			ms=2*ms;
			arr=new int[ms];
			// Copying the contents of oldArray to new one
			for(int i=0;i<cs;i++){
				arr[i]=oldArr[i];
			}
			// Deleting the old Array
			delete [] oldArr;
		}
		// Entering data into the array
		arr[cs]=d;
		cs++;
	}
	// Deleting element from array
	void pop_back(){
		if(cs>=0){
			cs--;
		}
	}
	// Check if the vector is empty
	bool isEmpty() const{
		return cs==0;
	}
	
	// Front, Back, At(i), [] -> Operator overloading
	int front() const{
		return arr[0];
	}
	
	int back() const{
		return arr[cs-1];
	}
	
	int size() const{
		return cs;
	}
	
	int capacity() const{
		return ms;
	}
	
	int at(int i){
		return arr[i];
	}
	
	int operator[](const int i) const{
		return arr[i];
	}
};

int main()
{
	Vector v(5);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.pop_back();
	
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	cout<<v.at(3)<<endl;
	
	// Printing all  the elements present in the vector
	cout<<"Contents of the array are:"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}