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
    vector<ll> operations,mins;
    segtree(ll n){
        size=1;
        while(size<n) size<<=1;
        operations=vector<ll>(size*2,0);
        mins=vector<ll>(size*2,0);
    }
    void add(ll l,ll r,ll v,ll x,ll lx,ll rx){
        if(lx>=r || rx<=l) return;
        if(lx>=l && rx<=r){
            mins[x]+=v;
            operations[x]+=v;
            return;
        }
        ll mid=lx+(rx-lx)/2;
        if(l<mid)
            add(l,r,v,2*x+1,lx,mid);
        if(r>mid)
            add(l,r,v,2*x+2,mid,rx);
        mins[x]=min(mins[2*x+1],mins[2*x+2])+operations[x];
    }
    void add(ll l,ll r,ll v){
        add(l,r,v,0,0,size);
    }
    ll minf(ll l,ll r,ll x,ll lx,ll rx){
        if(lx>=r || rx<=l) return LLONG_MAX;
        if(lx>=l && rx<=r) return mins[x];
        ll mid=lx+(rx-lx)/2;
        ll u1,u2;
        u1=minf(l,r,2*x+1,lx,mid);
        u2=minf(l,r,2*x+2,mid,rx);
        return min(u1,u2)+operations[x];
    }
    ll minf(ll l,ll r){
        return minf(l,r,0,0,size);
    }
};
int main(){
    fastio
    ll n,m,l,r,v,ch;
    cin>>n;
    segtree st(n);
    cin>>m;
    while(m--){
        cin>>ch;
        if(ch==1){
            cin>>l>>r>>v;
            st.add(l,r,v);
        }
        else{
            cin>>l>>r;
            cout<<st.minf(l,r)<<"\n";
        }
    }
}