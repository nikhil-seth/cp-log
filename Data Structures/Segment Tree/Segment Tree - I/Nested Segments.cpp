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
struct segtree{
	ll size;
	vector<ll> sums;
	segtree(ll n){
		size=1;
		while(size<n) size<<=1;
		sums=vector<ll>(2*size,0);
	}
	void set(ll i,ll x,ll lx,ll rx){
		if(rx-lx==1){
			sums[x]=1;
			return;
		}
		ll mid=lx+(rx-lx)/2;
		if(i<mid)
			set(i,2*x+1,lx,mid);
		else
			set(i,2*x+2,mid,rx);
		sums[x]=sums[2*x+1]+sums[2*x+2];
	}
	void set(ll i){
		set(i,0,0,size);
	}
	ll sum(ll l,ll x,ll lx,ll rx){
		if(l<=lx) return sums[x];
		ll mid=lx+(rx-lx)/2;
		if(l<mid)
			return sums[2*x+2]+sum(l,2*x+1,lx,mid);
		return sum(l,2*x+2,mid,rx);
	}
	ll sum(ll l){
		return sum(l,0,0,size);
	}
	void pr(){
		FOR(i,0,2*size-1)
			cout<<sums[i]<<' ';
		cout<<endl;
	}
};

int main(){
	fastio
	ll n,x;
	cin>>n;
	segtree st(2*n);
	vector<int> v(n+1,-1);
	vector<int> ans(n+1);
	FOR(i,0,2*n-1){
		cin>>x;
		if(v[x]!=-1){
			ans[x]=st.sum(v[x]);
			st.set(v[x]);
			//st.pr();
		}
		else
			v[x]=i;
	}
	FOR(i,1,n)
		cout<<ans[i]<<' ';
}