#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n;
	cin>>t;
	std::vector<ll> v;
	for(ll i=0;i<t;i++){
		cin>>n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());

	ll min = v[1] - v[0];

	for(ll i=2; i<t; i++){
		
		if((v[i] - v[i-1]) < min ){
			
			min = v[i] - v[i-1];
		}
	}
	cout<<min<<"\n";
}