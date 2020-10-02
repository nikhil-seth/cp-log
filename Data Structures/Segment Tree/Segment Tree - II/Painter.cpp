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
struct node{
	ll tot,seg;
	bool pre,suf;
	node(){
		tot=seg=0;
		pre=suf=0;
	}
	node(ll x,ll b){
		if(b==1)
			tot=x,seg=1,pre=suf=1;
		else
			tot=0,seg=0,pre=0,suf=0;
	}
};
struct segtree{
	ll size;
	vector<node> sums;
	vector<ll> ops;
	// 0->W,1->B, in sums
	// 0->No update, 2-> update of B,1->Update of White.
	segtree(ll n){
		size=1;
		while(size<n) size<<=1;
		sums=vector<node>(size*2);
		ops=vector<ll>(size*2,0);
	}
	void update(node &x,node &y,node &z){
		x.tot=y.tot+z.tot;
		x.seg=y.seg+z.seg;
		if(y.suf && z.pre) x.seg-=1;
		x.pre=y.pre;
		x.suf=z.suf;
	}
	void modify(ll l,ll r,ll v,ll x,ll lx,ll rx){
		if(lx>=r || rx<=l) return;
		if(lx>=l && rx<=r){
			sums[x]=node(rx-lx,v);
			ops[x]=v+1;
			return;
		}
		ll mid=lx+(rx-lx)/2;
		if(ops[x]!=0){
			modify(lx,rx,ops[x]-1,2*x+1,lx,mid);
			modify(lx,rx,ops[x]-1,2*x+2,mid,rx);
			ops[x]=0;
		}
		modify(l,r,v,2*x+1,lx,mid);
		modify(l,r,v,2*x+2,mid,rx);
		update(sums[x],sums[2*x+1],sums[2*x+2]);
	}
	void modify(ll l,ll r,ll v){
		//cout<<l<<' '<<r<<' '<<v<<endl;
		modify(l,r,v,0,0,size);
	}
	void sum(){
		cout<<sums[0].seg<<' '<<sums[0].tot<<endl;
	}
};

int main(){
	fastio
	ll n,m,l,r;
	char ch;
	cin>>n;
	m=1000000;
	segtree st(1000000);
	while(n--){
		cin>>ch>>l>>r;
		if(ch=='W')
			st.modify(l+500000,l+r+500000,0);
		else
			st.modify(l+500000,l+r+500000,1);
		st.sum();
	}
}