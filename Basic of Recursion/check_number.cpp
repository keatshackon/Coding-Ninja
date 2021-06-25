#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool x_find(int arr[], int x, int n) {

	if (n == 0) {
		return 0;
	}

	if (arr[0] == x) {
		return 1;
	} else {
		return x_find(arr + 1, x , n - 1);
	}

}


int main() {

	ll t;

	int arr[6] = {66, 3, 45, 46, 57, 7};
	int x = 66;

	cout << x_find(arr, x, 0);

	return 0;

}