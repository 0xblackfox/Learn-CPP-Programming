#include <iostream>
#include <cmath>
#include<algorithm>
#include<string>
using namespace std;

int oct_to_dec(int n) {
	int ans = 0;
	int base  = 1;
	while (n != 0) {
		int last = n % 10;
		ans += last * base;
		base *= 8;
		n /= 10;

	}
	return ans;

}

int main()
{
	int n;
	cin >> n;
	cout << oct_to_dec(n) << endl;
	return 0;
}