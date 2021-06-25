#include<bits/stdc++.h>
using namespace std;
#define ll long long

int ff(int arr[], int i, int n, int x) {

	if (i == n) {
		return -1;
	}

	if (arr[i] == x) {
		return i;
	} else {
		return ff(arr, i + 1, n, x);
	}

}


int main() {

	ll t;
	int arr[6] = {4, 9 , 89 , 10, 88, 8};
	int x = 8;

	cout << ff(arr, 0, 6, x);

	return 0;

}