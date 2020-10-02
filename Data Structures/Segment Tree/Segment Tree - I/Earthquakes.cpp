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
		sums=vector<ll>(size*2,-1);
	}
	void update(ll x){
		sums[x]=-1;
		if(sums[2*x+1]>0)
			sums[x]=sums[2*x+1];
		if(sums[2*x+2]>0 && sums[x]!=-1)
			sums[x]=min(sums[x],sums[2*x+2]);
		else if(sums[2*x+2]>0)
			sums[x]=sums[2*x+2];
	}
	void set(ll i,ll v,ll x,ll lx,ll rx){
		if(rx-lx==1){
			if(i<=lx)
				sums[x]=v;
			return;
		}
		ll mid=lx+(rx-lx)/2;
		if(i<mid)
			set(i,v,2*x+1,lx,mid);
		else
			set(i,v,2*x+2,mid,rx);
		update(x);
	}
	void set(ll i,ll v){
		set(i,v,0,0,size);
	}
	ll sum(ll l,ll r,ll p,ll x,ll lx,ll rx){
		if(rx-lx==1){
			sums[x]=-1;
			return 1;
		}
		ll mid=lx+(rx-lx)/2;
		ll ctr=0;
		if(sums[2*x+1]>0 && sums[2*x+1]<=p && l<mid)
			ctr+=sum(l,r,p,2*x+1,lx,mid);
		if(sums[2*x+2]>0 && sums[2*x+2]<=p && r>mid)
			ctr+=sum(l,r,p,2*x+2,mid,rx);
		update(x);
		return ctr;
	}
	ll sum(ll l,ll r,ll p){
		return sum(l,r,p,0,0,size);
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
	cin>>n>>m;
	segtree st(n);
	while(m--){
		cin>>ch;
		if(ch==1){
			ll i,h;
			cin>>i>>h;
			st.set(i,h);
		}
		else{
			ll l,r,p;
			cin>>l>>r>>p;
			cout<<st.sum(l,r,p)<<endl;
		}
		//st.pr();
		//cout<<"sd"<<endl;
	}
}