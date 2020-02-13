#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
ll gcd(ll a,ll b,ll &x,ll &y){
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	ll x1,y1,d;
	d=gcd(b,a%b,x1,y1);
	y=x1;
	x=y1+(a/b)*x1;
	return d;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t;
	cin>>t;
	FOR(i,1,t){
		ll a,b,c;
		cin>>a>>b>>c;
		printf("Case %d: ",i);
		if(a==0 && b==0){
			if(c==0)
				printf("Yes\n");
			else
				printf("No\n");
		}
		ll x,y,g;
		g=gcd(a,b,x,y);
		if(c%g==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}