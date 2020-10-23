#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;



int Euclidian(int a,int b){
	if(a<b){
		return Euclidian(a,b%a);
	}
	if(b == 0 ){
		return a;
	}
	return Euclidian(b,a%b);
}


int main()
{
	ll n,k;
	cin>>n>>k;
	cout<<Euclidian(n,k);
	return 0;

}