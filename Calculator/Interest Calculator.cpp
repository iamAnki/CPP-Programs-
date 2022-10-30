#include<bits/stdc++.h>
using namespace std;

int main(){
    
    float principle, rate_of_interest, time;
    cout<<"Enter Principle Amount: ";
    cin>>principle;
    cout<<"Enter Annual Rate of Interest: ";
    cin>>rate_of_interest;
    cout<<"Enter Time of Investment (in years): ";
    cin>>time;
    
    int type;
    cout<<"Enter 1 for Simple Interest and 2 for Compound Interest: ";
    cin>>type;
    
    if(type == 1){
        float interest = principle * rate_of_interest * time / 100.0;
        cout<<fixed<<"Interest added: "<<interest<<endl;
        cout<<fixed<<"Amount after "<<time<<" years: "<<principle+interest<<endl;
    }
    else if(type == 2){
        float amount = principle * pow((1.0 + rate_of_interest/100.0), time);
        cout<<fixed<<"Interest added: "<<amount-principle<<endl;
        cout<<fixed<<"Amount after "<<time<<" years: "<<amount<<endl;
    }
    else{
        cout<<"Invalid Choice"<<endl;
    }
    
}
