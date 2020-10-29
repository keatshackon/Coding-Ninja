#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cpm(pair<int,int> a, pair<int,int> b){
	return a.second < b.second;
}

int main()
{

	vector<pair<int,int>> v;
	ll n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(), v.end(),cpm);
	int weight = 0;
	cin>>weight; 
	for(auto q:v){
		cout<<"Value == "<<q.first<<" : "<<q.second<<"\n";
	}
	cout<<"\n";
	int cur = 0;
	int val = 0;
	for(auto q:v ){
		if(cur + q.second <= weight){
			cur+=q.second;
			val+=q.first;
		}
	}

	cout<<val<<"\n";



}