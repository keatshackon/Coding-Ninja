#include<bits/stdc++.h>
using namespace std;
#define ll long long

int x_find(int arr[], int n, int x) {

	if (n < 0) {
		return -1;
	}

	if (arr[n] == x) {
		return n;
	}
	return x_find(arr,  n - 1 , x);

}

int main() {

	ll t;

	int arr[5] = {8, 8 , 10 , 8 , 8};
	int x = 8;

	cout << x_find(arr, 4, x);

	return 0;
}