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
		while(size<n)
			size<<=1;
		sums=vector<ll>(size*2,0);
	}
	void build(vector<ll> &a,ll x,ll lx,ll rx){
		if(rx-lx==1){
			if(lx<a.size())
				sums[x]=a[lx];
			return;
		}
		ll mid=lx+(rx-lx)/2;
		build(a,2*x+1,lx,mid);
		build(a,2*x+2,mid,rx);
		sums[x]=max(sums[2*x+1],sums[2*x+2]);
	}
	void build(vector<ll> &a){
		build(a,0,0,size);
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
	ll find(ll l,ll x,ll lx,ll rx){
		if(rx-lx==1) return sums[x];
		ll mid=lx+(rx-lx)/2;
		//cout<<x<<' '<<mid<<endl;
		if(l<mid)
			return find(l,2*x+1,lx,mid)+sums[2*x+2];
		else
			return find(l,2*x+2,mid,rx);
	}
	ll find(ll l){
		//cout<<endl;
		return find(l,0,0,size);
	}
};
int main(){
	fastio
	ll n;
	cin>>n;
	vector<ll> arr(n);
	FORA(x,arr) cin>>x;
	segtree st(n);
	FOR(i,0,n-1){
		cout<<st.find(arr[i]-1)<<' ';
		st.set(arr[i]-1);
	}
}