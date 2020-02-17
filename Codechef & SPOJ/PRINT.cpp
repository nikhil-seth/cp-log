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
#define maxn 100001
using namespace std;
vector<ll> pr;
void sieve(){
	vector<bool> vis(maxn,1);
	for(ll i=2;i<maxn;i++){
		if(vis[i]){
			pr.pb(i);
			for(ll j=i*i;j<maxn;j+=i)
				vis[j]=0;
		}
	}
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	sieve();
	int t;
	scanf("%d",&t);
	while(t--){
		ll a,b,x;
		scanf("%lld%lld",&a,&b);
		if(a==1)
			a+=1;
		vector<bool> arr(b-a+1,1);
		FOR(i,0,pr.size()-1){
			if(pr[i]>b)
				break;
			else if(pr[i]<a)
				x=ceil(double(a)/pr[i]);
			else
				x=2;
			x*=pr[i];
			while(x<=b){
				arr[x-a]=0;
				x+=pr[i];
			}
		}
		FOR(i,0,b-a){
			if(arr[i])
				printf("%lld\n",i+a);
		}
	}
}