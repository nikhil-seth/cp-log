#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
ll dp[10000001];
void init(){
	FOR(i,1,10000000)
		dp[i]=i;
	FOR(i,2,10000){
		if(dp[i]!=i) continue;
		for(ll j=i*i;j<=10000000;j+=i)
			dp[j]=i;
	}
}
int main(){
	fastio
	dp[1]=1;
	init();
	ll n,x;
	cin>>n;
	ll a1[n],a2[n];
	FOR(i,0,n-1){
		cin>>x;
		set<ll> v;
		while(x!=1){
			v.insert(dp[x]);
			x/=dp[x];
		}
		if(v.size()==1)
			a1[i]=a2[i]=-1;
		else{
			ll x=1;
			auto it=v.begin();
			it++;
			for(;it!=v.end();it++)
				x*=(*it);
			a1[i]=(*v.begin());
			a2[i]=x;
		}
	}
	FORA(x,a1)
		cout<<x<<' ';
	cout<<endl;
	FORA(x,a2)
		cout<<x<<' ';
	cout<<endl;
}
