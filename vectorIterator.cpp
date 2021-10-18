#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> v;
    v.push_back("A");
    v.push_back("B");
    v.push_back("C");

    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;

    for (iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << endl;

    myIterator = v.begin();
    *myIterator = "D";
    for (iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << endl;

    cout << *myIterator << "' has ";
    cout << (*myIterator).size() << " letters in it.\n";

    cout << "\nThe item name '" << *myIterator << "' has ";
    cout << myIterator->size() << " letters in it.\n";

    v.insert(v.begin(), "A");
    for (iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << endl;

    v.erase((v.begin() + 2));
    for (iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << endl;

 return 0;
}