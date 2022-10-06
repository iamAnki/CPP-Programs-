// Magic 8 Ball using SWITCH/CASE statement.

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    int a;
    string ques;
    srand(time(NULL));
    a=rand()%10;

    cout<<"Ask me a YES/NO question! \n";
    cin>>ques;

    switch (a)
    {
    case 0:
        cout<<"Yes\n";
        break;
    case 1:
        cout<<"Most Likely\n";
        break;
    case 2:
        cout<<"Surely\n";
        break;
    case 3:
        cout<<"I think so\n";
        break;
    case 4:
        cout<<"Well, maybe\n";
        break;
    case 5:
        cout<<"Well, maybe not\n";
        break;
    case 6:
        cout<<"Don't think so\n";
        break;
    case 7:
        cout<<"Not likely\n";
        break;
    case 8:
        cout<<"Doesn't look like it\n";
        break;
    case 9:
        cout<<"Nope, No signs\n";
        break;

    default:
        break;
    }
    
return 0;
}
