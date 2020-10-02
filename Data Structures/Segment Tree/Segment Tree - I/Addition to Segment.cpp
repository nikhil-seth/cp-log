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
	void set(ll i,ll v,ll x,ll lx,ll rx){
		if(rx-lx==1){
			if(i<=lx)
				sums[x]+=v;
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
	ll sum(ll l,ll x,ll lx,ll rx){
		if(rx-lx==1) return sums[x];
		ll mid=lx+(rx-lx)/2;
		//cout<<l<<' '<<x<<' '<<lx<<' '<<rx<<' '<<mid<<endl;
		if(l<mid)
			return sum(l,2*x+1,lx,mid);
		else
			return sum(l,2*x+2,mid,rx)+sums[2*x+1];
	}
	ll sum(ll i){
		return sum(i,0,0,size);
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
			ll l,r,v;
			cin>>l>>r>>v;
			st.set(l,v);
			st.set(r,-v);
		}
		else{
			ll i;
			cin>>i;
			cout<<st.sum(i)<<endl;
		}
		//cout<<"sd"<<endl;
	}
}