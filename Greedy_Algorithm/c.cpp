#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	char s[100];
	std::vector<string> v;
	
	while(true){
		cin>>s;
		if(strcmp("q",s) == 0){
			break;
		}
		if( (strcmp(" ",s) == 0)){
			v.push_back("-1");
			cout<<"-1";
		}

    	string str = ""; 
    	for (int i = 0; i < sizeof(s); i++) { 
    	    str = str + s[i]; 
    	}  

		v.push_back(str);
	}
	int cnt=0;
	for(string q:v){
		if(q == "-1"){
			cnt++;
		}

	}
	cout<<"\n";
	cout<<"Number Of Balnk key: "<<cnt<<"\n";
	cout<<"Number of Key : "<<v.size()<<"\n";
	set<string>se(v.begin(), v.end());
	
	cout<<"Number of Lock : "<<se.size();
	
}