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
		sums=vector<ll>(size*2);
	}
	void update(ll x){
		sums[x]=sums[2*x+1]+sums[2*x+2];
	}
	void build(ll n,ll x,ll lx,ll rx){
		if(rx-lx==1){
			if(lx<n)
				sums[x]=1;
			return;
		}
		ll mid=lx+(rx-lx)/2;
		build(n,2*x+1,lx,mid);
		build(n,2*x+2,mid,rx);
		update(x);
	}
	void build(ll n){
		build(n,0,0,size);
	}
	ll find(ll k,ll x,ll lx,ll rx){
		if(rx-lx==1){
			return lx;
		}
		ll mid=lx+(rx-lx)/2;
		if(sums[2*x+2]<=k)
			return find(k-sums[2*x+2],2*x+1,lx,mid);
		else
			return find(k,2*x+2,mid,rx);
	}
	ll find(ll k){
		return find(k,0,0,size);
	}
	void set(ll i,ll x,ll lx,ll rx){
		if(rx-lx==1){
			sums[x]=0;
			return;
		}
		ll mid=lx+(rx-lx)/2;
		if(i<mid)
			set(i,2*x+1,lx,mid);
		else
			set(i,2*x+2,mid,rx);
		update(x);
	}
	void set(ll i){
		set(i,0,0,size);
	}
};
int main(){
	fastio
	ll n;
	cin>>n;
	vector<ll> arr(n);
	FORA(x,arr) cin>>x;
	segtree st(n);
	st.build(n);
	for(int i=n-1;i>=0;i-=1){
		ll x=st.find(arr[i]);
		arr[i]=x+1;
		st.set(x);
	}
	FOR(i,0,n-1)
		cout<<arr[i]<<' ';
}