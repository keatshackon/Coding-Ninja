#include<bits/stdc++.h>
using namespace std;
#define ll long long

int fib(int n) {

	if (n == 0 or n == 1) {
		return n;
	}

	int s1 = fib(n - 1);
	int s2 = fib(n - 2);

	return s1 + s2;

}


int main() {

	ll n;
	cin >> n;
	cout << fib(n);
	return 0;
}