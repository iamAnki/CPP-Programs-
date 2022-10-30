#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int num1,num2;
	cout<<" Enter the 1st Number : ";
	cin >> num1;
	cout<<endl;
	cout <<" Enter the 2nd Number : ";
	cin >> num2;
    cout<<endl;
	cout<<" ---------------------------"<<endl;
	
	switch(num1>num2){
		case 1:
		cout<<"  The 1st Number is Greater"<<endl;
		break;
	}
            switch(num1<num2){
			case 1:
			cout<<"  The 2nd Number is Greater"<<endl;
			break;
	            switch(num2<num1){
				case 1:
				cout<<"  The 2nd Number is Smaller"<<endl;
			}
			switch(num2=num1){
				case 1:
				cout<<"  The 2nd Number is Equal to 1st Number"<<endl;
			}
		switch(num1=num2){
			case 1:
			cout<<"  The 1st Number is equal to 2nd Number";
		}	
		}
	
	cout<<" ---------------------------"<<endl;
	
}