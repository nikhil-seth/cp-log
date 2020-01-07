#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n;
	cin>>n;
	int c0,c1,x;
	c0=c1=0;
	FOR(i,0,n-1){
		cin>>x;
		if(x==1)
			c0++;
		else
			c1++;
	}
	ll ans=0;
	ans=min(c1,c0);
	c1-=ans;
	c0-=ans;
	ans+=c0/3;
	cout<<ans;
}
