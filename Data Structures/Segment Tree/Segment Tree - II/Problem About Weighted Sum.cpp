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
	vector<ll> csums,sums;
	vector<ll> ops;
	// 0->W,1->B, in sums
	// 0->No update, 2-> update of B,1->Update of White.
	segtree(ll n){
		size=1;
		while(size<n) size<<=1;
		csums=vector<ll>(size*2,0);
		sums=vector<ll>(size*2,0);
		ops=vector<ll>(size*2,INT_MAX);
	}
	void build(vector<ll> &a,ll x,ll lx,ll rx){
		if(rx-lx==1){
			if(lx<a.size())
				sums[x]=csums[x]=a[lx];
			return;
		}
		ll mid=lx+(rx-lx)/2;
		build(a,2*x+1,lx,mid);
		build(a,2*x+2,mid,rx);
		sums[x]=sums[2*x+1]+sums[2*x+2];
		csums[x]=csums[2*x+1]+csums[2*x+2]+(mid-lx)*sums[2*x+2];
	}
	void build(vector<ll> &a){
		build(a,0,0,size);
	}
	void add(ll l,ll r,ll v,ll x,ll lx,ll rx){
		if(lx>=r || rx<=l) return;
		if(lx>=l && rx<=r){
			csums[x]+=(((rx-lx)*(rx-lx+1))/2)*v;
			sums[x]+=(rx-lx)*v;
			if(ops[x]!=INT_MAX)
				ops[x]+=v;
			else
				ops[x]=v;
			return;
		}
		ll mid=lx+(rx-lx)/2;
		if(ops[x]!=INT_MAX){
			add(lx,rx,ops[x],2*x+1,lx,mid);
			add(lx,rx,ops[x],2*x+2,mid,rx);
			ops[x]=INT_MAX;
		}
		add(l,r,v,2*x+1,lx,mid);
		add(l,r,v,2*x+2,mid,rx);
		sums[x]=sums[2*x+1]+sums[2*x+2];
		csums[x]=csums[2*x+1]+csums[2*x+2]+(mid-lx)*sums[2*x+2];
	}
	pair<ll,ll> query(ll l,ll r,ll x,ll lx,ll rx){
		if(lx>=r || rx<=l) return {0,0};
		if(lx>=l && rx<=r) return {csums[x],sums[x]};
		ll mid=lx+(rx-lx)/2;
		if(ops[x]!=INT_MAX){
			add(lx,rx,ops[x],2*x+1,lx,mid);
			add(lx,rx,ops[x],2*x+2,mid,rx);
			ops[x]=INT_MAX;
		}
		pair<ll,ll> p1,p2,p;
		p1=query(l,r,2*x+1,lx,mid);
		p2=query(l,r,2*x+2,mid,rx);
		p.second=p1.second+p2.second;
		p.first=p1.first+p2.first+max(0LL,min(mid,r)-max(lx,l))*p2.second;
		return p;
	}	void add(ll l,ll r,ll d){
		add(l,r,d,0,0,size);
	}
	ll query(ll l,ll r){
		return query(l,r,0,0,size).first;
	}
	void pr(){
		FOR(i,0,2*size-1)
			cout<<csums[i]<<' ';
		cout<<endl;
		FOR(i,0,2*size-1)
			cout<<sums[i]<<' ';
		cout<<endl;
	}
};


int main(){
	fastio
	ll n,m;
	cin>>n>>m;
	vector<ll> arr(n);
	FORA(x,arr) cin>>x;
	segtree st(n);
	st.build(arr);
	ll ch,l,r,d;
	while(m--){
		cin>>ch>>l>>r;
		if(ch==1){
			cin>>d;
			st.add(l-1,r,d);
		}
		else{
			cout<<st.query(l-1,r)<<"\n";
		}
		//st.pr();
	}
}
