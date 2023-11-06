// Pascale Pattern using function

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int fact(int num) {
	int factorial = 1;
	for (int i = 2; i <= num; i++) {
		factorial *= i;

	}
	return factorial;
}

int main(int argc, char const * argv[])
{
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			int ncr = fact(i) / (fact(j) * fact(i - j));
			cout << ncr << " ";
		}
		cout << endl;

	}
	return 0;
}

