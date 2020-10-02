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
	vector<ll> opsa,opsd;
	segtree(ll n){
		size=1;
		while(size<n) size<<=1;
		opsa=vector<ll>(size*2,0);
		opsd=vector<ll>(size*2,0);
	}
	void assign(ll l,ll r,ll a,ll d,ll x,ll lx,ll rx){
		//cout<<l<<' '<<r<<' '<<a<<' '<<d<<' '<<lx<<' '<<rx<<endl;
		if(lx>=r || rx<=l) return;
		if(lx>=l && rx<=r){
			opsa[x]+=a;
			opsd[x]+=d;
			return;
		}
		ll mid=lx+(rx-lx)/2;
		if(opsa[x]!=0 || opsd[x]!=0){
			assign(lx,rx,opsa[x],opsd[x],2*x+1,lx,mid);
			assign(lx,rx,opsa[x]+opsd[x]*(mid-lx),opsd[x],2*x+2,mid,rx);
			opsa[x]=opsd[x]=0;
		}
		assign(l,r,a,d,2*x+1,lx,mid);
		assign(l,r,a+d*max(0LL,min(mid,r)-max(l,lx)),d,2*x+2,mid,rx);
		//cout<<"Asd"<<endl;
	}
	ll pt(ll i,ll x,ll lx,ll rx){
		if(rx-lx==1) return opsa[x];
		ll mid=lx+(rx-lx)/2;
		if(opsa[x]!=0 || opsd[x]!=0){
			assign(lx,rx,opsa[x],opsd[x],2*x+1,lx,mid);
			assign(lx,rx,opsa[x]+opsd[x]*(mid-lx),opsd[x],2*x+2,mid,rx);
			opsa[x]=opsd[x]=0;
		}
		if(i<mid)
			return pt(i,2*x+1,lx,mid);
		else
			return pt(i,2*x+2,mid,rx);
	}
	void assign(ll l,ll r,ll a,ll d){
		assign(l,r,a,d,0,0,size);
	}
	ll pt(ll i){
		return pt(i,0,0,size);
	}
};

int main(){
	fastio
	ll n,m,ch,l,r,a,d;
	cin>>n>>m;
	segtree st(n);
	while(m--){
		cin>>ch;
		if(ch==1){
			cin>>l>>r>>a>>d;
			st.assign(l-1,r,a,d);
		}
		else{
			cin>>l;
			cout<<st.pt(l-1)<<"\n";
		}
		//st.pr();
	}
}