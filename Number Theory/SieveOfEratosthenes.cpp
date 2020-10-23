
/*
	TIME COMPLEXITY IS nlog(log(n))
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int isprime(ll n){
	if(n == 1){
		return 0;
	}
	for(ll i=2;i*i <=n; i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

int main()
{
	ll t,n,k,a;
	cin>>n;
	std::vector<ll> v(n+1,1);
	v[0]=0;v[1]=0;
	for(ll i=2;i*i<=n;i++){
		if(v[i] == 1){
			if(isprime(i)){
				for(ll j=i*i;j<=n;j+=i){
					v[j] = 0;
				}
			}	
		}
	}
	int cnt = 0;
	for(auto q:v){
		if(q == 1)
			cnt++;
	}
	cout<<"\n"<<cnt;
}