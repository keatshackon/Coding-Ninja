#include<bits/stdc++.h>
using namespace std;
#define ll long long

void x_find(int arr[], int i, int n, int x) {

	if (i == n) {
		return;
	}

	if (arr[i] == x) {
		cout << i << " ";
	}
	return x_find(arr, i + 1, n , x);


}

int main() {

	ll t;

	int arr[5] = {8, 8 , 10 , 8 , 8};
	int x = 8;

	x_find(arr, 0, 5, x);

	return 0;


}