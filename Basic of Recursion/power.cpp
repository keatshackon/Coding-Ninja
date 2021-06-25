#include<bits/stdc++.h>
using namespace std;
#define ll long long


int x_pow(int n, int x) {

	if (x == 1) {
		return n;
	}

	return n * x_pow(n, --x);

}


int main() {

	ll n, x;
	cin >> n >> x;

	cout << x_pow(n, x);

	return 0;

}