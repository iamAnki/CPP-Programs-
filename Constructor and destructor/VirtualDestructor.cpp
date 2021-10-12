// Write a program to display a class destructor's behavior using a virtual destructor in C ++

#include<iostream>  

using namespace std;  


class Base  
{  
    public:  
    Base() // Constructor member function.    
{  
    cout << "\n Constructor Base class";  // It prints first.  
}  
 virtual ~Base() // Define the virtual destructor function to call the Destructor Derived function.  
{  
    cout << "\n Destructor Base class";  /  
}  
};  
// Inheritance concept  
class Derived: public Base   
{  
    public:  
    Derived() // Constructor function.  
{  
    cout << "\n Constructor Derived class" ; /* After print the Constructor Base, now it will prints. */  
}  
 ~Derived() // Destructor function   
{  
    cout << "\n Destructor Derived class"; /* The virtual Base Class? Destructor calls it before calling the Base Class Destructor. */  
}         
};  


int main()  
{  
    Base *bptr = new Derived; // A pointer object reference the Base class.  
    delete bptr; // Delete the pointer object.  
  
    return 0;
}  
