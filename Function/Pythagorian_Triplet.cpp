
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;


bool check(int x, int y, int z) {
	int a, b, c;
	a = max(x, max(y, z)) ;

	if (a == x) {
		b = y;
		c = z;

	} else if (a == y) {
		b = x;
		c = z;
	} else {
		b = x;
		c = y;
	}


	if (a * a == b * b + c * c) {
		return true;
	} else {
		return false;
	}


}


int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (check(x, y, z)) {
		cout << "Pythagorian Triplet" << endl;
	} else {
		cout << " Not a Pythagorian Triplet" << endl;
	}

	//cout << "hello world \n";
	return 0;
}
