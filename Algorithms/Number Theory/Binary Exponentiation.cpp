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
ll binpow(ll a,ll b){
	ll res=1;
	while(b>0){
		if(b&1)
			res=res*a;
		a*=a;
		b>>=1;
	}
	return res;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll a,b;
	cin>>a>>b;
	cout<<binpow(a,b);
}
