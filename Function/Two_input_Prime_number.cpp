// Two digit input Prime Number using function

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;



bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;

}

int main()
{


	int num1, num2;
	cin >> num1 >> num2;

	for (int i = num1; i <= num2; i++) {
		if (isPrime(i)) {
			cout << i << endl;
		}

	}

}