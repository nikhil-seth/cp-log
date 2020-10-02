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
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll c1,c0;
		c1=c0=0;
		for(auto c:s){
			if(c=='1') c1+=1;
			else c0+=1;
		}
		c1=min(c1,c0);
		if(c1%2==0)
			cout<<"NET\n";
		else
			cout<<"DA\n";
	}
}
