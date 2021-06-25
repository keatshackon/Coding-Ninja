#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool is_sorted(int arr[], int n) {

	if (n < 1) {
		return true;
	}

	if (arr[n] >= arr[n - 1]) {
		return is_sorted(arr, n - 1);
	} else {
		return false;
	}

}


int main() {

	ll t, n;

	int arr1[6] = {23, 3, 5, 2, 10, -1};
	int arr2[5] = {2, 1};

	cout << is_sorted(arr2, 1);

	return 0;
}