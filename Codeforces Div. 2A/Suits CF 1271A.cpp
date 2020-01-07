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
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	int c1=min(a,d)*e;
	int c2=min(min(b,c),d)*f;
	ll ans=0;
	if(e>f){
		c1=min(a,d);
		ans+=c1*e;
		d-=c1;
		a-=c1;
	}
	else{
		c2=min(min(b,c),d);
		ans+=c2*f;
		d-=c2;
		c-=c2;
		b-=c2;
	}
	ans+=min(a,d)*e;
	ans+=min(min(b,c),d)*f;
	cout<<ans;
}