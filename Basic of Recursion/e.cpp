#include<bits/stdc++.h>
using namespace std;

void print(int n) {

	// cout << n << "\n";

	if (n < 0) {
		return;
	}
	if (n == 0) {
		cout << n << " ";
		return;
	}
	cout << n << " ";
	print(--n);

}

int main() {

	int num = 3;
	print(num);
}