//  Kashish Ahuja
//  Program for variadic function

#include<iostream>
using namespace std;
#include<stdarg.h>

void sum(int count, ...)
{
    int sum=0;
    va_list args;
    va_start(args, count);
    for(int i=0; i<count; i++)
        sum += va_arg(args, int);
    va_end(args);
    cout<<"\nSum is: "<<sum;
}

void min(int count, ...)
{
    int min, minima;
    va_list args;
    va_start(args, count);
    minima = min = va_arg(args, int);
    for(int i=0; i<count; i++)
    {
        min = va_arg(args, int);
        if(min<minima)
            minima=min;
    }
    va_end(args);
    cout<<"\nMinimum value: "<<minima;
}

void max(int count, ...) {
    int max, maxima;
    va_list args;
    va_start( args, count );
    maxima=max=va_arg(args,int);
    for(int i=0; i<count; i++)
    {
        max=va_arg(args,int);
        if(max>maxima)
            maxima=max;
    }
    va_end( args );
    cout<<"\nMaximum value: "<<maxima;
}

int main()
{
    cout<<"\n\nThree arguments: ";
    sum(3,5,7,9);
    min(3,5,7,9);
    max(3,5,7,9);

    cout<<"\n\nFive arguments: ";
    sum(5,6,7,8,9,10);
    min(5,6,7,8,9,10);
    max(5,6,7,8,9,10);

    cout<<"\n\nTen arguments: ";
    sum(10,9,8,7,6,5,4,3,2,1,0);
    min(10,9,8,7,6,5,4,3,2,1,0);
    max(10,9,8,7,6,5,4,3,2,1,0);

    return 0;
}