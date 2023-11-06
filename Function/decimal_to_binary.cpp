#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int dec_to_bin(int n) {
	int ans = 0;
	int base = 1;

	while (base <= n)
		base *= 2;
	cout << "base1 = " << base << endl;
	base /= 2;
	cout << "base2 = " << base << endl;
	while (base > 0) {
		int last = n / base;
		cout << "last = " << last << endl;
		n -= last * base;
		cout << "n = " << n << endl;
		base /= 2;
		cout << "base3 = " << base << endl;
		ans = ans * 10 + last;
		cout << "ans = " << ans << endl;
	}



	return ans;
}

int main()
{
	int n;
	cin >> n;
	cout << dec_to_bin(n) << endl;

	/*	int num, tmp[32] ;
		cin >> num;
		int i = 0 ;
		while (num != 0) {

			tmp[i] = num % 2;
			num = num / 2;
			i++;

		}


		for (int j = i - 1; j >= 0; j--) {
			cout << tmp[j];
		}*/


	return 0;
}