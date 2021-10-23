#include<iostream>
using namespace std;

int main()
{
    int amount;

    int note1, note2, note5, note10, note20, note50, note100, note500;

    note1 = note2 = note5 = note10 = note20 = note50 = note100 = note500 = 0;

    cout << "Enter amount: "<<endl;
    cin >> amount;

    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

    cout << "Total number of notes" <<endl;
    cout << "500 = " << note500 <<endl;
    cout << "100 = " << note100 <<endl;
    cout << "50 = " << note50 <<endl;
    cout << "20 = " << note20 <<endl;
    cout << "10 = " << note10 <<endl;
    cout << "5 = " << note5 <<endl;
    cout << "2 = " << note2 <<endl;
    cout << "1 = " << note1 <<endl;

    return 0;

}
