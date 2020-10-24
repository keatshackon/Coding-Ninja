#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
typedef long long ll;

int main()
{
	
	std::vector<int> v = {11,12,13,14,15,16,17,18};

	// Inbuilt Binary Search!
	cout<<binary_search(v.begin(),v.end(),3)<<"\n";

	//Inbuilt GCD function
	cout<<__gcd(12,20)<<"\n";

	// lower_bound function gives address  just lower than given elemnt if lement not present in array but give same elements's index if it is present !
	cout<<(lower_bound(v.begin(),v.end(),15))-v.begin()<<"\n";

	// upper_bound function gives address  just above than given element!
	cout<<upper_bound(v.begin(), v.end(),15)-v.begin()<<"\n";

	return 0;
}