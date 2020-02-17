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
#define maxn 1000001
using namespace std;
vector<int> pr;
long tot[maxn];
vector<bool> comp(maxn,0);
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	tot[1]=1;
	FOR(i,2,maxn-1){
		if(!comp[i]){
			pr.pb(i);
			tot[i]=i-1;
		}
		FOR(j,0,pr.size()-1){
			ll ith=pr[j]*i;
			if(ith>=maxn)
				break;
			if(i%pr[j])
				tot[ith]=tot[i]*(pr[j]-1);
			else
				tot[ith]=tot[i]*pr[j];
			comp[ith]=1;
		}
	}
	ll g[maxn];
	mms(g);
	for(ll i=1;i<maxn;i++){
		for(ll j=i+i;j<maxn;j+=i){
			g[j]+=(ll)(tot[j/i]*i);
		}
	}
	FOR(i,1,maxn-1)
		g[i]+=g[i-1];
	ll n;
	while(1){
		cin>>n;
		if(n==0)
			break;
		cout<<g[n]<<endl;
	}	
	return 0;
}