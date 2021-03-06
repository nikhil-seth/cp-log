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
	vector<ll> mins;
	void init(ll n){
		size=1;
		while(size<n) size*=2;
		mins.assign(2*size,LONG_MAX);
	}
	void build(vector<ll> &arr,ll x,ll lx,ll rx){
		if(rx-lx==1){// 1 Element Left or leaf node
			// we also need to check ki ye lx array m h ya nahi
			if(lx<arr.size())
				mins[x]=arr[lx];
			return;
		}
		ll mid=(lx+rx)/2;
		build(arr,2*x+1,lx,mid);
		build(arr,2*x+2,mid,rx);
		mins[x]=min(mins[2*x+1],mins[2*x+2]);
	}
	void build(vector<ll> &arr){
		build(arr,0,0,size);
	}
	void set(ll i,ll val,ll x,ll lx,ll rx){
		if(rx-lx==1){ // 1 element
			mins[x]=val;
			return;
		}
		ll mid=(lx+rx)/2;
		if(i<mid) // traverse left st
			set(i,val,2*x+1,lx,mid);
		else
			set(i,val,2*x+2,mid,rx);
		mins[x]=min(mins[2*x+1],mins[2*x+2]);
	}
	void set(ll i,ll val){
		set(i,val,0,0,size);
	}
	ll minVal(ll x,ll l,ll r,ll lx,ll rx){
		if(lx>=r || rx<=l) return LONG_MAX;  // Why equals kuki r excluded hai segment seh.
		if(lx>=l && rx<=r) return mins[x];
		ll mid=(lx+rx)/2;
		ll s1,s2;
		s1=minVal(2*x+1,l,r,lx,mid);
		s2=minVal(2*x+2,l,r,mid,rx);
		return min(s1,s2);
	}
	ll minVal(ll l,ll r){
		return minVal(0,l,r,0,size);
	}
};
int main(){
	fastio
	ll n,m,x;
	cin>>n>>m;
	segtree st;
	st.init(n);
	vector<ll> arr(n);
	FORA(x,arr) cin>>x;
	st.build(arr);
	while(m--){
		int op;
		cin>>op;
		if(op==1){
			ll i,val;
			cin>>i>>val;
			st.set(i,val);
		}
		else{
			ll l,r;
			cin>>l>>r;
			cout<<st.minVal(l,r)<<endl;
		}
	}
}