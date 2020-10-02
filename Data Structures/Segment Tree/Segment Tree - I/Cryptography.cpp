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
ll r=0;
struct obj{
	ll v[2][2];
	obj(){
		v[0][0]=v[1][1]=1;
		v[1][0]=v[0][1]=0;
	}
};
void multiply(obj &c,const obj &a,const obj &b){
	FOR(i,0,1){
		FOR(j,0,1){
			c.v[i][j]=0;
			FOR(k,0,1)
				c.v[i][j]=(c.v[i][j]+(a.v[i][k]*b.v[k][j])%r)%r;

		}
	}
}
void multiply(obj &c,const obj &a){
	obj b=c;
	FOR(i,0,1){
		FOR(j,0,1){
			c.v[i][j]=0;
			FOR(k,0,1)
				c.v[i][j]=(c.v[i][j]+(b.v[i][k]*a.v[k][j])%r)%r;

		}
	}
}
struct segtree{
	ll size;
	vector<obj> sums;
	segtree(ll n){
		size=1;
		while(size<n) size<<=1;
		sums=vector<obj>(size*2);
	}
	void build(vector<obj> &a,ll x,ll lx,ll rx){
		if(rx-lx==1){
			if(lx<a.size())
				sums[x]=a[lx];
			return;
		}
		ll mid=lx+(rx-lx)/2;
		build(a,2*x+1,lx,mid);
		build(a,2*x+2,mid,rx);
		multiply(sums[x],sums[2*x+1],sums[2*x+2]);
	}
	void build(vector<obj> &a){
		build(a,0,0,size);
	}
	void query(ll l,ll r,ll x,ll lx,ll rx,obj &b){
		if(r<=lx ||rx<=l) return;
		if(rx<=r && lx>=l){
			multiply(b,sums[x]);
			return;
		}
		ll mid=lx+(rx-lx)/2;
		query(l,r,2*x+1,lx,mid,b);
		query(l,r,2*x+2,mid,rx,b);
	}
	obj query(ll l,ll r){
		obj b;
		query(l,r,0,0,size,b);
		return b;
	}
};
int main(){
	fastio
	ll n,m;
	cin>>r>>n>>m;
	segtree st(n);
	vector<obj> v(n);
	FOR(i,0,n-1){
		FOR(j,0,1){
			FOR(k,0,1)
				cin>>v[i].v[j][k];
		}
	}
	st.build(v);
	ll l,r;
	obj b;
	while(m--){
		cin>>l>>r;
		b=st.query(l-1,r);
		FOR(i,0,1){
			FOR(j,0,1)
				cout<<b.v[i][j]<<' ';
			cout<<"\n";
		}
		cout<<"\n";
	}
}