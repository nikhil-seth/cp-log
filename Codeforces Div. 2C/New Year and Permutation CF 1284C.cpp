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
	ll n,m;
	cin>>n>>m;
	ll val[n+1];
	val[0]=1;
	FOR(i,1,n){
		val[i]=(val[i-1]*i)%m;
	}
	ll ans=0,a,b,c;
	FOR(i,0,n-1){
		a=(((n-i)%m)*((n-i)%m))%m;
		b=(val[i+1]*val[n-i-1])%m;
		c=(a*b)%m;
		ans=(ans+c)%m;
	}
	cout<<ans;
}