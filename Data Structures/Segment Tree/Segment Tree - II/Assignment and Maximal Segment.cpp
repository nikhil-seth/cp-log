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
    ll seg,pre,suf,tot;
    node(){
        seg=pre=suf=tot=0;
    }
    node(ll x,ll size){
        tot=size*x;
        pre=suf=seg=max(x*size,0LL);
    }
};
struct segtree{
    ll size;
    vector<node> sums;
    vector<ll> operations;
    segtree(ll n){
        size=1;
        while(size<n) size<<=1;
        sums=vector<node>(size*2,node());
        operations=vector<ll>(size*2,LLONG_MAX);
       // build(n,0,0,size);
    }
    /*void build(ll n,ll x,ll lx,ll rx){
        if(rx-lx==1){
            if(lx<n)
                sums[x]=0;
            return;
        }
        ll mid=lx+(rx-lx)/2;
        build(n,2*x+1,lx,mid);
        build(n,2*x+2,mid,rx);
        sums[x]=sums[2*x+1] & sums[2*x+2];
    }*/
    void update(node &x,node &y,node &z){
        x.tot=y.tot+z.tot;
        x.seg=max(max(y.seg,z.seg),y.suf+z.pre);
        x.pre=max(y.pre,y.tot+z.pre);
        x.suf=max(z.suf,z.tot+y.suf);
    }
    void modify(ll l,ll r,ll v,ll x,ll lx,ll rx){
        if(lx>=r || rx<=l) return;  // No Update.
        if(lx>=l && rx<=r){
            sums[x]=node(v,rx-lx);
            operations[x]=v;
            return;
        }
        ll mid=lx+(rx-lx)/2;
        if(operations[x]!=LLONG_MAX){
            modify(lx,mid,operations[x],2*x+1,lx,mid);
            modify(mid,rx,operations[x],2*x+2,mid,rx);
            operations[x]=LLONG_MAX;   
        }
        modify(l,r,v,2*x+1,lx,mid);
        modify(l,r,v,2*x+2,mid,rx);
        update(sums[x],sums[2*x+1],sums[2*x+2]);
    }
    void modify(ll l,ll r,ll v){
        modify(l,r,v,0,0,size);
    }
    node sum(ll l,ll r,ll x,ll lx,ll rx){
        if(lx>=r || rx<=l) return node();
        if(lx>=l && rx<=r) return sums[x];
        ll mid=lx+(rx-lx)/2;
        node u1,u2,u;
        u1=sum(l,r,2*x+1,lx,mid);
        u2=sum(l,r,2*x+2,mid,rx);
        update(u,u1,u2);
        return u;
    }
    ll sum(ll l,ll r){
        node x;
        x=sum(l,0,0,0,size);
        return x.seg;
    }
    ll sum(){
        return sums[0].seg;
    }
    /*void pr(){
        FOR(i,0,2*size-1)
            cout<<sums[i]<<' ';
        cout<<endl;
    }*/
};
int main(){
    fastio
    ll n,m,ch,l,r,v;
    cin>>n>>m;
    segtree st(n);
    while(m--){
        cin>>l>>r>>v;
        st.modify(l,r,v);
        cout<<st.sum()<<endl;
    }
}