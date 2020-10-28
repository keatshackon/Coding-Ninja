#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t,n;
	cin>>t;
	std::vector<int> v;
	for(int i=0;i<t;i++){
		cin>>n;
		v.push_back(n);
	}
	sort(v.begin(), v.end(),greater<int>());

	int k=0,i=0;
	ll res = 0; 
	while(i<t){
		res += v[i] * pow(2,k);
		k++;
		i++;
	}
	cout<<res<<"\n";
}