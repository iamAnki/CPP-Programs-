#include <iostream>
#include <map>
#include <string>
using namespace std; 

int main()
{
  map<string, long> directory;
  directory["A"] = 1234567;
  directory["B"] = 9876543;
  directory["C"] = 3459876;



  string name = "A";

  if (directory.find(name) != directory.end()) 
      cout << "The phone number for " << name
           << " is " << directory[name] << "\n";
   else
      cout << "Sorry, no listing for " << name << "\n";
  return 0;
}