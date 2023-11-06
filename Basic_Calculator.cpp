#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	float a, b;
	char op;
	cout << "enter two number: " << endl;
	cin >> a >> b;
	cout << "enter operator: " << endl;
	cin >> op;

	switch (op) {
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a*b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;

	default:
		cout << "It's not a number" << endl;
		break;



	}
	return 0;
}

