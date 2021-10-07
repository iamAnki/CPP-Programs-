#include<iostream>
#include<math.h>
using namespace std;
const int size = 15;
class opstack
{
	int st[size];
	int top;
public:
	opstack()
	{
		top = -1;
	}
	void push(int);
	int pop();
	int evaluate(string);
};
void opstack:: push(int add)
{
	top++;
	st[top] = add;
}
int opstack:: pop()
{
	int d = st[top];
	top--;
	return d;
}
int opstack:: evaluate(string s)
{
	int i = 0;
	char sym;
	int op1, op2, value;
	while (s[i] != '\0')
	{
		sym = s[i];
		if ((sym != '+')&(sym != '-')&(sym != '*')&(sym != '/') & (sym != '$'))
		{
			push(int(sym) - 48);
		}
		else
		{
			op2 = pop();
			op1 = pop();
			switch (sym)
			{
			case '+':
				value = op1 + op2;
				break;
			case '-':
				value = op1 - op2;
				break;
			case '*':
				value = op1 * op2;
				break;
			case '/':
				value = op1 / op2;
				break;
			case '$':
				value = pow(op1, op2);
				break;
			}
			push(value);
		}
		i++;
	}
	return pop();
}
int main()
{
	opstack o;
	string s;
	char ch;
	do
	{
		cout << "Enter a String: ";
		cin >> s;
		int value;
		value = o.evaluate(s);
		cout << "The value of the expression: " << value;
		cout << "\nDo you wish to continue? (Y|N) ";
		cin >> ch;
	}
	while (ch == 'y' || ch == 'Y');
	return 0;
}
