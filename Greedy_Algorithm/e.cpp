#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,a,b,n;
	float res = 0.0;
	// string s;
	char ag;
	while(true){
		cin>>a;
		if(a >= 1 && a<21){
			cin>>b;
			switch(a)
			{
				case 1:
					res+= 80*b;
					break;
				case 2:
					res+= 130*b;
					break;
				case 3:
					res+= 100*b;
					break;
				case 4:
					res+=80*b;
					break;			
				case 5:	
					res+=90*b;
					break;
				case 6:
					res+=110*b;
					break;
				case 7:
					res+=120*b;
					break;
				case 8:
					res+=140*b;
					break;
				case 9:
					res+=70*b;
					break;
				case 10:
					res+=80*b;
					break;
					
				case 11:
					res+=130*b;
					break;
					
				case 12:
					res+=160*b;
					break;
					
				case 13:
					res+=70*b;
					break;
					
				case 14:
					res+=60*b;
					break;
				case 15:
					res+=40*b;
					break;
				case 16:
					res+=50*b;
					break;
					
				case 17:
					res+=30*b;
					break;
					
				case 18:
					res+=40*b;
					break;
					
				case 19:
					res+=160*b;
					break;
				case 20:
					res+=150*b;
					break;
				
			}
		}else{
			cout<<"INVALID INPUT\n";
		}
		
		
		cin>>ag;
		if(ag == 'n' || ag == 'N'){
			break;
		}
	}
	printf("%.1f",res);
}