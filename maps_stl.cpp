#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
   // map is and associative array ,used to store the key pair values
   map<string, int> marksMap;
   marksMap["ana"] = 56;
   marksMap["sna"] = 67;
   marksMap["ena"] = 76;
   marksMap.insert({{"isha", 11}, {"prisha", 44}});
   map<string, int>::iterator iter;
   for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
   {
      cout << (*iter).first << " " << (*iter).second << endl;
   }
   cout << "The size is: " << marksMap.size() << endl;
   cout << "The max size is: " << marksMap.max_size() << endl;
   cout << "The empty's return value is: " << marksMap.empty() << endl;

return 0;
}
