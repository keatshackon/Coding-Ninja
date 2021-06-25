#include<bits/stdc++.h>
using namespace std;
#define ll long long

int x_sum(int arr[], int n) {

	if (n == 0)  {
		return 0;
	}

	return arr[0] + x_sum(arr + 1, n - 1);

}

int main() {

	ll t, k, q;
	cin >> t;
	int arr[t];
	for (int i = 0; i < t; i++) {
		cin >> q;
		arr[i] = q;
	}
	cout << x_sum(arr, t);

	return 0;

}