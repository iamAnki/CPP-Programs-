#include <iostream>
using namespace std;
 int main()
{
  const int MAX = 1000000;
  const int sqrtMAX = 1000;
  int n;
  int b[MAX+1] = {0};
  int i, j;
  int sum;
  int count;
  b[0] = 1;
  b[1] = 1;
  cin>> n;
  for(i=4; i<=MAX; i+=2)
      b[i] = 1;
  for(i=3; i<=sqrtMAX; i+=2)
      for(j=i+i; j<=MAX; j+=i)
          b[j] = 1;
 
      if(n == 0)
          return 0;
      sum = 0;
      count = 0;
      for(i=2; count<n; i++) {
        if(b[i]==0) {
              count++;
              sum+=i;
        }
    }
   cout << "Sum of the  first " << n << " Prime numbers is: " << sum;
  return 0;
}
