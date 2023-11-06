#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int maxi = INT_MIN;
	int mini = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxi) {
			maxi = arr[i];

		}
		if (arr[i] < mini)
		{
			mini = arr[i];
		}

	}

	cout << maxi << " " << mini << endl;



	/*	int n;
		cin >> n;

		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
	*/

	/*	int n[3] = {12, 1, 23};
		cout << n[0] << endl;*/

	return 0;
}