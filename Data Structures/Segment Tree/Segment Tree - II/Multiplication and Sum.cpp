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
const ll mod=1e9+7;
struct segtree{
    ll size;
    vector<ll> operations,sums;
    segtree(ll n){
        size=1;
        while(size<n) size<<=1;
        operations=vector<ll>(size*2,1);
        sums=vector<ll>(size*2,0);
        FOR(i,0,n-1){
            sums[i+size-1]=1;
        }
        build(0,0,size);
    }
    void build(ll x,ll lx,ll rx){
        if(rx-lx==1) return;
        ll mid=lx+(rx-lx)/2;
        build(2*x+1,lx,mid);
        build(2*x+2,mid,rx);
        sums[x]=(sums[2*x+1]+sums[2*x+2])%mod;
    }
    void modify(ll l,ll r,ll v,ll x,ll lx,ll rx){
        if(lx>=r || rx<=l) return;
        if(lx>=l && rx<=r){
            sums[x]=(sums[x]*v)%mod;
            operations[x]=(operations[x]*v)%mod;
            return;
        }
        ll mid=lx+(rx-lx)/2;
        if(l<mid)
            modify(l,r,v,2*x+1,lx,mid);
        if(r>mid)
            modify(l,r,v,2*x+2,mid,rx);
        sums[x]=(((sums[2*x+1]+sums[2*x+2])%mod)*operations[x])%mod;
    }
    void modify(ll l,ll r,ll v){
        modify(l,r,v,0,0,size);
    }
    ll sum(ll l,ll r,ll x,ll lx,ll rx){
        if(lx>=r || rx<=l) return 0;
        if(lx>=l && rx<=r) return sums[x];
        ll mid=lx+(rx-lx)/2;
        ll u1,u2;
        u1=sum(l,r,2*x+1,lx,mid);
        u2=sum(l,r,2*x+2,mid,rx);
        return (((u1+u2)%mod)*operations[x])%mod;
    }
    ll sum(ll l,ll r){
        return sum(l,r,0,0,size);
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
            st.modify(l,r,v);
        }
        else{
            cin>>l>>r;
            cout<<st.sum(l,r)<<"\n";
        }
    }
}