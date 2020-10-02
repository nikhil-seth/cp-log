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
	vector<ll> opsass,opsadd;
	segtree(ll n){
		size=1;
		while(size<n) size<<=1;
		sums=vector<ll>(size*2,0);
		opsadd=vector<ll>(size*2,0);
		opsass=vector<ll>(size*2,-1);
	}
	void assign(ll l,ll r,ll v,ll x,ll lx,ll rx){
		if(lx>=r || rx<=l) return;
		if(lx>=l && rx<=r){
			sums[x]=(rx-lx)*v;
			opsass[x]=v;
			opsadd[x]=0;
			return;
		}
		ll mid=lx+(rx-lx)/2;
		if(opsass[x]!=-1){
			assign(lx,rx,opsass[x],2*x+1,lx,mid);
			assign(lx,rx,opsass[x],2*x+2,mid,rx);
			opsass[x]=-1;
		}
		if(opsadd[x]!=0){
			add(lx,rx,opsadd[x],2*x+1,lx,mid);
			add(lx,rx,opsadd[x],2*x+2,mid,rx);
			opsadd[x]=0;
		}
		assign(l,r,v,2*x+1,lx,mid);
		assign(l,r,v,2*x+2,mid,rx);
		sums[x]=sums[2*x+1]+sums[2*x+2];
	}
	void add(ll l,ll r,ll v,ll x,ll lx,ll rx){
		if(lx>=r || rx<=l) return;
		if(lx>=l && rx<=r){
			sums[x]+=(rx-lx)*v;
			opsadd[x]+=v;
			return;
		}
		ll mid=lx+(rx-lx)/2;
		if(opsass[x]!=-1){
			assign(lx,rx,opsass[x],2*x+1,lx,mid);
			assign(lx,rx,opsass[x],2*x+2,mid,rx);
			opsass[x]=-1;
		}
		if(opsadd[x]!=0){
			add(lx,rx,opsadd[x],2*x+1,lx,mid);
			add(lx,rx,opsadd[x],2*x+2,mid,rx);
			opsadd[x]=0;
		}
		add(l,r,v,2*x+1,lx,mid);
		add(l,r,v,2*x+2,mid,rx);
		sums[x]=sums[2*x+1]+sums[2*x+2];
	}
	ll query(ll l,ll r,ll x,ll lx,ll rx){
		if(lx>=r || rx<=l) return 0;
		if(lx>=l && rx<=r) return sums[x];
		ll mid=lx+(rx-lx)/2;
		if(opsass[x]!=-1){
			assign(lx,rx,opsass[x],2*x+1,lx,mid);
			assign(lx,rx,opsass[x],2*x+2,mid,rx);
			opsass[x]=-1;
		}
		if(opsadd[x]!=0){
			add(lx,rx,opsadd[x],2*x+1,lx,mid);
			add(lx,rx,opsadd[x],2*x+2,mid,rx);
			opsadd[x]=0;
		}
		return query(l,r,2*x+1,lx,mid)+query(l,r,2*x+2,mid,rx);
	}
	ll query(ll l,ll r){
		return query(l,r,0,0,size);
	}
	void add(ll l,ll r,ll v){
		add(l,r,v,0,0,size);
	}
	void assign(ll l,ll r,ll v){
		assign(l,r,v,0,0,size);
	}
	void pr(){
		FOR(i,0,2*size-1)
			cout<<sums[i]<<' ';
		cout<<endl;
		FOR(i,0,2*size-1)
			cout<<opsadd[i]<<' ';
		cout<<endl;

		FOR(i,0,2*size-1)
			cout<<opsass[i]<<' ';
		
		cout<<endl;
	}
};

int main(){
	fastio
	ll n,m,ch,l,r,v;
	cin>>n>>m;
	segtree st(n);
	while(m--){
		cin>>ch>>l>>r;
		if(ch==1){
			cin>>v;
			st.assign(l,r,v);
		}
		else if(ch==2){
			cin>>v;
			st.add(l,r,v);
		}
		else{
			cout<<st.query(l,r)<<"\n";
		}
		//st.pr();
	}
}