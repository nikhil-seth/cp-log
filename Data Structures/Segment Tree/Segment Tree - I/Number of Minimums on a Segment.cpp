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
struct item{
	ll val,cnt;
	item(){
		this->val=INT_MAX;
		this->cnt=0;
	}
	item(ll val,ll cnt){
		this->val=val;
		this->cnt=cnt;
	}
};
struct segtree{
	ll size;
	vector<item> mins;
	void init(ll n){
		size=1;
		while(size<n) size*=2;
		mins.assign(2*size,item());
	}
	void build(vector<ll> &arr,ll x,ll lx,ll rx){
		if(rx-lx==1){// 1 Element Left or leaf node
			// we also need to check ki ye lx array m h ya nahi
			if(lx<arr.size())
				mins[x]=item(arr[lx],1);
			return;
		}
		ll mid=(lx+rx)/2;
		build(arr,2*x+1,lx,mid);
		build(arr,2*x+2,mid,rx);
		if(mins[2*x+1].val<mins[2*x+2].val)
			mins[x]=mins[2*x+1];
		else if(mins[2*x+1].val>mins[2*x+2].val)
			mins[x]=mins[2*x+2];
		else
			mins[x]=item(mins[2*x+1].val,mins[2*x+1].cnt+mins[2*x+2].cnt);
	}
	void build(vector<ll> &arr){
		build(arr,0,0,size);
	}
	void set(ll i,ll val,ll x,ll lx,ll rx){
		if(rx-lx==1){ // 1 element
			mins[x]=item(val,1);
			return;
		}
		ll mid=(lx+rx)/2;
		if(i<mid) // traverse left st
			set(i,val,2*x+1,lx,mid);
		else
			set(i,val,2*x+2,mid,rx);
		if(mins[2*x+1].val<mins[2*x+2].val)
			mins[x]=mins[2*x+1];
		else if(mins[2*x+1].val>mins[2*x+2].val)
			mins[x]=mins[2*x+2];
		else
			mins[x]=item(mins[2*x+1].val,mins[2*x+1].cnt+mins[2*x+2].cnt);
	}
	void set(ll i,ll val){
		set(i,val,0,0,size);
	}
	item cmin(ll x,ll l,ll r,ll lx,ll rx){
		if(lx>=r || rx<=l) return item();  // Why equals kuki r excluded hai segment seh.
		if(lx>=l && rx<=r) return mins[x];
		ll mid=(lx+rx)/2;
		item s1,s2;
		s1=cmin(2*x+1,l,r,lx,mid);
		s2=cmin(2*x+2,l,r,mid,rx);
		if(s1.val<s2.val)
			return s1;
		else if(s1.val>s2.val)
			return s2;
		else{
			s1.cnt+=s2.cnt;
			return s1;
		}
	}
	item cmin(ll l,ll r){
		return cmin(0,l,r,0,size);
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
			item x=st.cmin(l,r);
			cout<<x.val<<' '<<x.cnt<<endl;
		}
	}
}