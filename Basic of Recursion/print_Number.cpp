#include<bits/stdc++.h>
using namespace std;
#define ll long long


void print(int t) {

	if (t == 0) {
		return;
	}
	print(t - 1);
	cout << t << " ";

}


int main() {

	ll t;
	cin >> t;

	print(t);

	return 0;
}