#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n;
	cin>>t;
	std::vector<int> v;
	while(t--){
		cin>>n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());

	ll min = v[1] - v[0];

	for(int i=2; i<t; i++){
		
		if((v[i] - v[i-1]) < min ){
			
			min = v[i] - v[i-1];
		}
	}
	cout<<min<<"\n";
}