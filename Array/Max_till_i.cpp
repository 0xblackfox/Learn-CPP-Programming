#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n;
	int mx = INT_MIN;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		mx = max(mx, arr[i]);
		cout << mx << endl;
	}


	return 0;
}