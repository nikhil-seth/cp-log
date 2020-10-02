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
	ll mseg,pref,suff,ts;
	item(){
		mseg=pref=suff=ts=0;
	}
	item(ll a,ll b,ll c,ll d){
		mseg=a;
		pref=b;
		suff=c;
		ts=d;
	}
	item(ll a){
		mseg=pref=suff=ts=a;
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
				mins[x]=item(arr[lx]);
			return;
		}
		ll mid=(lx+rx)/2;
		build(arr,2*x+1,lx,mid);
		build(arr,2*x+2,mid,rx);
		mins[x].mseg=max(mins[2*x+1].mseg,max(mins[2*x+2].mseg,mins[2*x+1].suff+mins[2*x+2].pref));
		mins[x].pref=max(mins[2*x+1].pref,mins[2*x+1].ts+mins[2*x+2].pref);
		mins[x].suff=max(mins[2*x+2].suff,mins[2*x+2].ts+mins[2*x+1].suff);
		mins[x].ts=mins[2*x+1].ts+mins[2*x+2].ts;
	}
	void build(vector<ll> &arr){
		build(arr,0,0,size);
	}
	void set(ll i,ll val,ll x,ll lx,ll rx){
		if(rx-lx==1){ // 1 element
			mins[x]=item(val);
			return;
		}
		ll mid=(lx+rx)/2;
		if(i<mid) // traverse left st
			set(i,val,2*x+1,lx,mid);
		else
			set(i,val,2*x+2,mid,rx);
		mins[x].mseg=max(mins[2*x+1].mseg,max(mins[2*x+2].mseg,mins[2*x+1].suff+mins[2*x+2].pref));
		mins[x].pref=max(mins[2*x+1].pref,mins[2*x+1].ts+mins[2*x+2].pref);
		mins[x].suff=max(mins[2*x+2].suff,mins[2*x+2].ts+mins[2*x+1].suff);
		mins[x].ts=mins[2*x+1].ts+mins[2*x+2].ts;
	}
	void set(ll i,ll val){
		set(i,val,0,0,size);
	}
	/*item cmin(ll x,ll l,ll r,ll lx,ll rx){
		if(lx>=r || rx<=l) return item();  // Why equals kuki r excluded hai segment seh.
		if(lx>=l && rx<=r) return mins[x];
		ll mid=(lx+rx)/2;
		item s1,s2,s3;
		s1=cmin(2*x+1,l,r,lx,mid);
		s2=cmin(2*x+2,l,r,mid,rx);
		s3.mseg=max(s1.mseg,max(s2.mseg,s1.suff+s2.pref));
		s3.pref=max(s1.pref,s1.ts+s2.pref);
		s3.suff=max(s2.suff,s2.ts+s1.suff);
		s3.ts=s1.ts+s2.ts;
		return s3;
	}*/
	ll cmin(){
		return max(mins[0].mseg,0LL);
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
		cout<<st.cmin()<<endl;
		ll i,val;
		cin>>i>>val;
		st.set(i,val);
	}
	cout<<st.cmin()<<endl;
}
