#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n, last, decimal = 0;
	cin >> n;
	while (n > 0) {
		last = n % 10;
		decimal = decimal * 10 + last;
		n = n / 10;

	}
	cout << decimal << endl;
	return 0;
}

