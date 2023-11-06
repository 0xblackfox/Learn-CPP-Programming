// Factorial Number using Function

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



int main() {


	int n ;
	cin >> n;
	cout << fact(n);

	return 0;
}