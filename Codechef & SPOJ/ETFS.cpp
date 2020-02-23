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
const int maxn= 1e7;
vector<int> pr;
void sieve(){
	vector<bool> vis(maxn,1);
	pr.pb(2);
	for(ll i=3;i<maxn;i+=2){
		if(vis[i]){
			pr.pb(i);
			for(ll j=i*i;j<maxn;j+=(2*i))
				vis[j]=0;
		}
	}
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll a,b;
	scanf("%lld%lld",&a,&b);
	sieve();
	ll arr[b-a+1],r[b-a+1];
	FOR(i,0,b-a){
		arr[i]=i+a;
		r[i]=i+a;
	}
	FOR(i,0,pr.size()-1){
		ll p,x;
		p=pr[i];
		if(p<a)
			p=((a+p-1)/pr[i])*pr[i];
		while(p<=b){
			arr[p-a]-=(arr[p-a]/pr[i]);
			while(r[p-a]%pr[i]==0)
				r[p-a]/=pr[i];
			p+=pr[i];
		}
	}
	for(ll i=a;i<=b;i++){
		if(r[i-a]>1){
			arr[i-a]/=r[i-a];
			arr[i-a]*=(r[i-a]-1);
		}
	}
	FOR(i,0,b-a){
		if(i==b-a)
			printf("%lld",arr[i]);
		else
			printf("%lld\n",arr[i]);
	}
}