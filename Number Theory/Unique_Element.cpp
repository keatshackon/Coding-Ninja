#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	ll t,n,i,j,a;
	cin>>t;
	std::vector<int> v;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			v.push_back(a);
		}
		int x = 0;

		for(int i=0;i<n;i++){
			x = x ^ v[i];
		}

		cout<<x<<"\n";

	}
}