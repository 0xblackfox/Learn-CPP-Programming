#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= row; col++) {
			cout << "*";
		}
		int space = 2 * n - 2 * row;
		for (int col = 1; col <= space; col++) {
			cout << " ";
		}
		for (int col = 1; col <= row; col++) {
			cout << "*";
		}
		cout << endl;

	}

	for (int row = n; row >= 1; row--) {
		for (int col = 1; col <= row; col++) {
			cout << "*";
		}
		int space = 2 * n - 2 * row;
		for (int col = 1; col <= space; col++) {
			cout << " ";
		}
		for (int col = 1; col <= row; col++) {
			cout << "*";
		}
		cout << endl;

	}
	return 0;
}

