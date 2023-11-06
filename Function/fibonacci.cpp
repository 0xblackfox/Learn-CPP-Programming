#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void fib(int num) {
	int number0 = 0;
	int number1 = 1;
	int temp;
	for (int i = 1; i <= num; i++) {
		cout << number0 << endl;
		temp =  number0 + number1;
		number0 = number1;
		number1 = temp;


	}
	return ;

}

int main()
{
	int n;
	cin >> n;
	fib(n);
	return 0;
}