
/*
Implement a class complex which represents the complex Number data type. Implement the following function :-
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read complex Numbers.
*/

#include<iostream>
using namespace std;
class complex
{
    float i;
    float j;
public:
    complex()
    {
        i=0;
        j=0;
    }

    complex operator+(complex);
    complex operator*(complex);
    friend istream &operator >>(istream &input,complex &t)
    {
        cout<<"Enter the Real Part: ";
        input>>t.i;
        cout<<"Enter the Imaginary Part: ";
        input>>t.j;
    }
    friend ostream &operator <<(ostream &output,complex &t)
    {
            output<<t.i<<"+"<<t.j<<"i\n";
    }

};

complex complex::operator+(complex c)
{
    complex temp;
    temp.i=i+c.i;
    temp.j=j+c.j;
    return(temp);
}

complex complex::operator*(complex c)
{
    complex temp2;
    temp2.i=(i*c.i)-(j*c.j);
    temp2.j=(j*c.i)+(i*c.j);
    return (temp2);
}


int main()
{
    complex c1,c2,c3,c4;
    cout<<"Default constructor value is "<<c1<<endl;
    cout<<"Enter the 1st number"<<endl;
    cin>>c1;
    cout<<"Enter the 2nd number"<<endl;
    cin>>c2;
    c3=c1+c2;
    c4=c1*c2;
    cout<<"\nThe First number is ";
    cout<<c1;
    cout<<"\nThe Second number is ";
    cout<<c2;
    cout<<"\nThe Addition is ";
    cout<<c3;
    cout<<"\nThe multiplication is ";
    cout<<c4;
    return 0;
};

