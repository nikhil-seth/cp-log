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
    vector<ll> cnt;
    ll inv=0;
    node(){
        cnt=vector<ll>(41,0);
    }
    node(ll n){
        cnt=vector<ll>(41,0);
        cnt[n]=1;
    }
};
struct segtree{
    ll size;
    vector<node> sums;
    segtree(ll n){
        size=1;
        while(size<n) size<<=1;
        sums=vector<node>(size*2);
    }
    void build(vector<ll> &a,ll x,ll lx,ll rx){
        if(rx-lx==1){
            if(lx<a.size())
                sums[x]=node(a[lx]);
            return;
        }
        ll mid=lx+(rx-lx)/2;
        build(a,2*x+1,lx,mid);
        build(a,2*x+2,mid,rx);
        update(x);
    }
    void update(node &x,node &y,node &z){
        x.inv=y.inv+z.inv;
        ll ctr=0;
        for(int i=40;i>0;i-=1){
            x.inv+=z.cnt[i]*ctr;
            ctr+=y.cnt[i];
            x.cnt[i]=y.cnt[i]+z.cnt[i];
        }
    }
    void update(ll x){
        update(sums[x],sums[2*x+1],sums[2*x+2]);
    }
    void set(ll i,ll v,ll x,ll lx,ll rx){
        if(rx-lx==1){
            sums[x]=node(v);
            return;
        }
        ll mid=lx+(rx-lx)/2;
        if(i<mid)
            set(i,v,2*x+1,lx,mid);
        else
            set(i,v,2*x+2,mid,rx);
        update(x);
    }
    void set(ll i,ll v){
        set(i,v,0,0,size);
    }
    void build(vector<ll> &a){
        build(a,0,0,size);
    }
    node find(ll l,ll r,ll x,ll lx,ll rx){
        if(l<=lx && r>=rx) return sums[x];
        if(l>=rx || r<=lx) return node();
        ll mid=lx+(rx-lx)/2;
        node v,u,z;
        u=find(l,r,2*x+1,lx,mid);
        v=find(l,r,2*x+2,mid,rx);
        update(z,u,v);
        return z;
    }
    ll find(ll x,ll y){
        node v;
        v=find(x,y,0,0,size);
        return v.inv;
    }
};
int main(){
    fastio
    ll n,q,ch,x,y;
    cin>>n>>q;
    vector<ll> v(n);
    FOR(i,0,n-1) cin>>v[i];
    segtree st(n);
    st.build(v);
    while(q--){
        cin>>ch;
        if(ch==1){
            cin>>x>>y;
            cout<<st.find(x-1,y)<<endl;
        }
        else{
            cin>>x>>y;
            st.set(x-1,y);
        }
    }
}