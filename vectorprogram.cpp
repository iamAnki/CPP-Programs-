#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int main()
{
  vector<char> vector2(3, 'x');
  assert (vector2.size() == 3);
  assert (vector2[0] == 'x' && vector2[1] == 'x' && vector2[2] == 'x');
  assert (vector2 == vector<char>(3, 'x'));

  return 0;
}