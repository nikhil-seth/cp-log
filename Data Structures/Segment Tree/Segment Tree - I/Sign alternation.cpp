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
		sums[x]=sums[2*x+1]+sums[2*x+2];
	}
	void build(vector<ll> &a){
		build(a,0,0,size);
	}
	void set(ll i,ll v,ll x,ll lx,ll rx){
		if(rx-lx==1){
			sums[x]=v;
			return;
		}
		ll mid=lx+(rx-lx)/2;
		if(i<mid)
			set(i,v,2*x+1,lx,mid);
		else
			set(i,v,2*x+2,mid,rx);
		sums[x]=sums[2*x+1]+sums[2*x+2];
	}
	void set(ll i,ll v){
		set(i,v,0,0,size);
	}
	ll sum(ll l,ll r,ll x,ll lx,ll rx){
		if(rx<=l || r<=lx) return 0;
		if(lx>=l && rx<=r) return sums[x];
		ll mid=lx+(rx-lx)/2;
		return sum(l,r,2*x+1,lx,mid)+sum(l,r,2*x+2,mid,rx);
	}
	ll sum(ll l,ll r){
		return sum(l,r,0,0,size);
	}
    void pr(){
        FOR(i,0,2*size-1)
            cout<<sums[i]<<' ';
        cout<<endl;
    }
};
int main(){
	fastio
	ll n,m,ch;
	cin>>n;
	vector<ll> arr(n);
	segtree st(n);
	FOR(i,0,n-1){
		cin>>arr[i];
		if(i%2) arr[i]*=-1;
	}
	st.build(arr);
	//st.pr();
	cin>>m;
	while(m--){
		cin>>ch;
		if(ch==0){
			ll i,v;
			cin>>i>>v;
			i-=1;
			if(i%2) st.set(i,-v);
			else st.set(i,v);
		}
		else{
			ll l,r,s;
			cin>>l>>r;
			s=st.sum(l-1,r);
			if(l%2)
				cout<<s;
			else
				cout<<-s;
			cout<<endl;
		}
	}
}