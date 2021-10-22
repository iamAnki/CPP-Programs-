#include<iostream>
using std::cout;
using std::endl;
class Complex {
public:
 double re, im; 
 Complex(double re = 0, double im = 0) {
 this->re = re; 
 this->im = im; 
 }
 void print() {
 cout << re << " + j" << im << endl;
 }
 Complex addm(Complex &c) {
 cout << "Inside method" << endl;
 Complex result;
 result.re = this->re + c.re;
 result.im = this->im + c.im;
 return result;
 }
 // declared as friend function because re and im are private
 // if they were public, we dont need to declare it as friend
//  friend Complex operator+(Complex &c1, Complex &c2);//here even if function is not friend function then also it can done operator overloading bcz members are public.
};
Complex operator+(const Complex &c1, Complex &c2) {
 cout << "Inside friend function" << endl;
//  Complex *result=new Complex;//for deleting these  we don't need  destructor for delete these we can't delete object in destructed. after main ends it will be autometicaly deleted.
 Complex result;
 result.re = c1.re + c2.re;
 result.im = c1.im + c2.im;
 return result;
}
int main() {
 Complex c1(1.1, 1.1), c2(2.2, 2.2), c3, c4,c5; 
 c3 = c1.addm(c2);
//  c4 = c1 + c2; //line 34 and 35 both are same.
c5=c1+c2+c1;//in these if first argument of operator+ is Complex &c1 then it gives error like:cannot bind non-const lvalue reference of type 'Complex&' to an rvalue of type 'Complex' c5=c1+c2+c4; so if first argument is const Complex &c1 then it will work fine.
c4=operator+(c1,c2);
 c3.print();
 c5.print();
 c4.print();
 return 0;
}
