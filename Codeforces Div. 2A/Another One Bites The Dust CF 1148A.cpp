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
	ll a,b,c,d;
	cin>>a>>b>>c;
	d=min(a,b);
	a-=d;
	b-=d;
	ll ans=0;
	ans=(c+d)*2;
	if(a>0)
		ans++;
	else if(b>0)
		ans++;
	cout<<ans;
}
