#include <iostream>
#include <string>
using namespace std;
void Time_Convert(int num) {
	bool flag;
	int hr = 0;
	do
	{
		flag = false;
		if (num >= 60)
		{
			hr++;
			num -= 60;
			flag = true;
		}
	} while (flag);
	cout << "\nH:M " << hr << ":" << num << endl;
}

int main() {
	Time_Convert(67);
	Time_Convert(60);
	Time_Convert(120);
	Time_Convert(40);
	return 0;
}
