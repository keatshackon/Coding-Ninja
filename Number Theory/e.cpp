#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m1,m2,m3;
    cin>>t;
    
    multimap<int, string, greater <int> >m; 
    string s;
    for(int i=0;i<t;i++){
        cin>>s>>m1>>m2>>m3;
        m.insert(make_pair(m1+m2+m3, s)); 
    }
    for(auto q:m){
        cout<<q.first<<" "<<q.second<<"\n";
    }
    int i=1;
    for(auto q:m){
        // cout<<i<<" "<<q.second<<"\n";
        i++;
    }
    
    
	return 0;
}
