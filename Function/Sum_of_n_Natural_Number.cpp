// Sum of n Natural Number using function

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;


int sum(int n) {
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += i;
	}
	return ans;
}


int main()
{
	int n;
	cin >> n;
	cout << sum(n) << endl;

	return 0;
}

