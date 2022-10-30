#include <iostream>  
#include <queue>  
using namespace std;  
void showsg(queue <int> sg)  
{  
    queue <int> ss = sg;  
    while (!ss.empty())  
    {  
        cout << '\t' << ss.front();  
        ss.pop();  
    }  
    cout << '\n';  
}  
  
int main()  
{  
    queue <int> fquiz;  
    fquiz.push(10);  
    fquiz.push(20);  
    fquiz.push(30);  
  
    cout << "The queue fquiz is : ";  
    showsg(fquiz);  
  
    cout << "\nfquiz.size() : " << fquiz.size();  
    cout << "\nfquiz.front() : " << fquiz.front();  
    cout << "\nfquiz.back() : " << fquiz.back();  
  
    cout << "\nfquiz.pop() : ";  
    fquiz.pop();  
    showsg(fquiz);  
  
    return 0;  
}  