#include<iostream>
using namespace std;
int main()
{
 
int month,day,year;
cout<<"Enter Month Number :";
    cin>>month;
cout<<"Enter day number :";
    cin>>day;
cout<<"Enter last two digits of Year :";
    cin>>year;
 
if(month*day==year)
    cout<<"This Date is a Magic Date.";
else
    cout<<"This date is not a Magic Date.";
return 0;
}
