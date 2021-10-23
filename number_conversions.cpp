#include <iostream>
using namespace std;

// function to convert decimal to binary
void decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
    	
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

// function to convert decimal to octal
void decToOctal(int n)
{
    int octalNum[100];
    int i = 0;
    while (n != 0) {
 
        // storing remainder in octal array
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
 
    // printing octal number array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << octalNum[j];
}

// function to convert decimal to hexadecimal
void decToHexa(int n)
{
    char hexaDeciNum[100];
    int i = 0;
    while (n != 0) {
        int temp = 0;
 
        // storing remainder in temp variable.
        temp = n % 16;
 
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
 
        n = n / 16;
    }
 
    // printing hexadecimal number array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}
   
int main()
{
    int n,choice;
    cout<<"1.Decimal to Binary"<<endl;
    cout<<"2.Decimal to Octal"<<endl;
    cout<<"3.Decimal to Hexadecimal"<<endl;
    cin>>choice;
    cout<<"Enter a number: ";
    cin>>n;
    
    switch(choice){
    	case 1:{
    		decToBinary(n);
			break;
		}
		case 2:{
			decToOctal(n);
			break;
		}
		case 3:{
			decToHexa(n);
			break;
		}
		default: cout<<"Please enter valid input"<<endl;
	}
    return 0;
 
}

 

