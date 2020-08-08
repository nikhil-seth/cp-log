#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	ll t,a,b,c,x,y;
	cin>>t;
	while(t--){
		cin>>a>>b>>c; 	
		if(a>c)
			x=-1,y=b;
		else if(a==c){
			if(b==1) x=-1,y=-1;
			else x=-1,y=b;
		}
		else{
			x=1;
			if(a*b>c)
				y=b;
			else
				y=-1;
		}
		cout<<x<<' '<<y<<endl;
	}
}