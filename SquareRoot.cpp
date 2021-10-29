#include <iostream>
 
double sqrt2(double a, int n)
{
    if (n == 0)
        return 0.5*(1+a);
    double x = sqrt2(a, n-1);
    return 0.5*(x + a/x);
}
double x = 0;
int main()
{
    std::cout << "Enter number to calculate Square Root \n" << std::endl;
    std::cin >> x;
    std::cout << "Square Root of " << x << " = " << sqrt2(x, 10) << std::endl;
}
