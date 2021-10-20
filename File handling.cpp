#include<iostream>
#include<fstream>
using namespace std;

class Employee
{
    char Name[20];
    int ID;
    double salary;
    public:
        void accept()
        {
            cin>>Name;
            cin>>ID;
            cin>>salary;
        }
        void display()
        {
            cout<<"\n Enter Name:"<<Name;
            cout<<"\n Enter Id:"<<ID;
            cout<<"\n Enter Salary:"<<salary;
        }
};
       
int main()
{
    Employee o[5];
    fstream f;
    int i,n;
   
    f.open("b16.txt");
    cout<<"\n How many employee information do you need to store?";
    cin>>n;
    cout<<"\n Enter information of employee in this format(NAME/ID/SALARY)";
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter information of:"<<i<<"\n Employee";
        o[i].accept();
        f.write((char*)&o[i],sizeof o[i]);
    }
   
    f.close();
   
    f.open("b16.txt",ios::in);
    cout<<"\n Information of Employees is as follows:";
    for(i=0;i<n;i++)
    {
        f.write((char*)&o[i],sizeof o[i]);
        o[i].display();
    }
    f.close();
   
    return 0;
}