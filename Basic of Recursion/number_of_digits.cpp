#include<bits/stdc++.h>
using namespace std;
#define ll long long

int num_of_digits(int n) {

	if (n == 0) {
		return 0;
	}

	return 1 + num_of_digits(n / 10);
}


int main() {

	ll t, n;
	cin >> t;

	if (t == 0) {
		cout << 1;
	} else {
		cout << num_of_digits(t) << "\n";
	}

	return 0;
}