#include <iostream>
using namespace std;

string test(string s, int n)
        {
            string resultFinal = " ";
            int frontOfString = 3;

            if (frontOfString > s.length())
                frontOfString = s.length();

            string front = s.substr(0, frontOfString);

            for (int i = 0; i < n; i++)
            {
                result += front;
            }
            return result;
        }
        
int main() 
 {
  cout << test("Python", 2) << endl;  
  cout << test("Python", 3) << endl;  
  cout << test("JS", 3) << endl;  
  return 0;    
}
