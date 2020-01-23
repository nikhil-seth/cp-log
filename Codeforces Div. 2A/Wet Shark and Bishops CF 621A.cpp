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
	ll n,x,y;
	cin>>n;
	ll ans=0,qt;
	map<ll,ll> m1,m2;
	FOR(i,0,n-1){
		cin>>x>>y;
		m1[x+y]++;
		m2[x-y]++;
	}
	FOR(i,-1000,2000){
		x=m1[i];
		x=(x*(x-1))/2;
		ans+=x;
		x=m2[i];
		x=(x*(x-1))/2;
		ans+=x;
	}
	cout<<ans;
}