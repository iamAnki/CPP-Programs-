#include<iostream>
#include<string>

using namespace std;
//Hashing map is a technique of encrypting a data type to get a key which is an integer
//But in hash you can only encrypt your data to create a key but it will not give you the value of the key
int main()
{
    string s("Hello");

    hash<int> intHash;
    hash<float> floatHash;
    hash<string> stringHash;
    hash<char> charHash;
    hash<bool> boolHash;

    cout<<"Hash key for 10 is : "<<intHash(10)<<endl;
    cout<<"Hash key for -10 is : "<<intHash(-10)<<endl;
    cout<<"Hash key for 3.54 is : "<<floatHash(3.54)<<endl;
    cout<<"Hash key for 'Hello' is : "<<stringHash(s)<<endl;
    cout<<"Hash key for 'a' is : "<<charHash('a')<<endl;
    cout<<"Hash key for boolean true is : "<<boolHash(true)<<endl;
    cout<<"Hash key for boolean false is : "<<boolHash(false)<<endl;

//------------------------------------------------------------------------------------------------
     hash<float> h;

    cout<<h(4.5)<<endl; //This has now encrypted the 4.5 float number. An integer will be printed.

    hash<string> h2;
    hash<char> h3;

    string helloWorld = "This is my secret message";
    char secretChar = 'R';
    cout<<"Value: "<<helloWorld<<endl<<"Key: "<<h2(helloWorld)<<endl;
    cout<<"Value: "<<secretChar<<endl<<"Key: "<<h3(secretChar)<<endl;
    //as you can see the helloWorld string just encrypted and secretChar character was encrypted

    return 0;

}
