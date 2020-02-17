#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
#define maxn 1000001
using namespace std;
ll n,q;
ll tot[maxn],ans[maxn];
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	FOR(i,1,maxn-1)
		tot[i]=i;
	FOR(i,2,maxn-1){
		if(tot[i]==i){
			tot[i]=i-1;
			for(ll j=i*2;j<maxn;j+=i)
				tot[j]-=tot[j]/i;
		}
	}
	FOR(i,1,maxn-1){
		for(ll j=i;j<maxn;j+=i)
			ans[j]+=(i*tot[i]);
	}
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		ll x=ans[n]+1;
		x*=n;
		x/=2;
		printf("%lld\n",x);
	}
}