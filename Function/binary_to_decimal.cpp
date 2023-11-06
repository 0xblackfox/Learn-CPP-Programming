#include <iostream>
#include <cmath>
#include<algorithm>
#include<string>
using namespace std;


int bin_to_dec(int n) {
	int ans = 0;
	int base = 1;
	while (n > 0) { // 1 0 1 0 1 = 1*1 +
		int last = n % 10; // 1 --> 0 -->
		ans += base * last; // 1*1 + 2*0 + 4*1 + 8*0 +  16 *1
		base *= 2 ;// 1*2 --> 2*2 --> 4*2 --> 8 *2
		n /= 10; // 10
	}
	return ans;  // 21
}

int main()
{

	int n;
	cin >> n;
	cout << bin_to_dec(n) << endl;

	return 0;
}