#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n, sum = 0;
	cin >> n;
	int orginal = n;
	while (n > 0) {  // 153 = 1^3 + 5 ^3 + 3^3
		int last = n % 10; // 3 5
		sum +=  pow(last, 3); // (0+27)+(27+125)+1
		n = n / 10; // 153/10 = 15 ; 15/10 = 1
	}
	if (sum == orginal) {
		cout << "Amstrong Number" << endl;
	}
	else {
		cout << "Not a Amstrong Number" << endl;
	}
	return 0;
}

