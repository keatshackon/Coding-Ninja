#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int,int> a, pair<int,int> b){

	double val1 = (double)a.first / a.second;
	double val2 = (double)b.first / b.second;

	return val1 > val2;
}

int main()
{
	vector<pair<int,int>> v;
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}

	sort(v.begin(), v.end(),cmp);

	int weight =0;
	cin>>weight;
	int cur = 0;
	int val = 0 ; 
	for(auto q:v){
		if(cur + q.second <= weight ){
			cur+=q.second;
			val+=q.first;
		}else{
			val = val +  (q.first * ((double)(weight-cur)/q.second));
			cout<<val<<"\n";
			break;
		}
	}
}