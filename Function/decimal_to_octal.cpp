#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;



int dec_to_oct(int n) {
	int ans = 0;
	int base = 1;
	while (base <= n)
		base *= 8;
	base /= 8;
	while (base > 0) {
		int last = n / base;
		n -= last * base;
		base /= 8;
		ans = ans * 10 + last;
	}

	return ans;
}

int main()
{

	int n;
	cin >> n;
	cout << dec_to_oct(n) << endl;

	return 0;
}