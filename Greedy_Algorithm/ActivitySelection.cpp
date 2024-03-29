#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool comp(pair<int,int>a,  pair<int,int> b)
{
	return a.second < b.second;
}

int main()
{
	int t;
	ll a,b;
	cin>>t;
	std::vector<pair<ll,ll>> v;
	for(int i=0;i<t;i++){
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(), v.end(),comp);
	int res = 1;
	ll q = v[0].second; 
	for(int i=1;i<t;i++){
		if(q <= v[i].first){
			res++;
			q = v[i].second; 
		}
	}
	cout<<res<<"\n";
}