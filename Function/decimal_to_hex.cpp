#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

string dec_to_hexa(int n) {
	int base = 1;
	string ans = "";
	while (base <= n)
		base *= 16;
	base /= 16;
	while (base > 0) {
		int last = n / base;
		n -= last * base;
		base /= 16;
		if (last <= 9) {
			ans = ans + to_string(last);
		} else {
			char c = 'A' + last - 10;
			ans.push_back(c);
		}
	}
	return ans;

}

int main()
{

	int n;
	cin >> n;
	cout << dec_to_hexa(n) << endl;

	return 0;
}