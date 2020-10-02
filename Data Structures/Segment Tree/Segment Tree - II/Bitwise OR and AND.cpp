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
    vector<ll> sums,operations;
    segtree(ll n){
        size=1;
        while(size<n) size<<=1;
        sums=vector<ll>(size*2,2147483647);
        operations=vector<ll>(size*2,0);
        build(n,0,0,size);
    }
    void build(ll n,ll x,ll lx,ll rx){
        if(rx-lx==1){
            if(lx<n)
                sums[x]=0;
            return;
        }
        ll mid=lx+(rx-lx)/2;
        build(n,2*x+1,lx,mid);
        build(n,2*x+2,mid,rx);
        sums[x]=sums[2*x+1] & sums[2*x+2];
    }
    void modify(ll l,ll r,ll v,ll x,ll lx,ll rx){
        if(lx>=r || rx<=l) return;  // No Update.
        if(lx>=l && rx<=r){
            // Update this.
            sums[x]|=v;
            operations[x]|=v;
            return;
        }
        ll mid=lx+(rx-lx)/2;
        if(l<mid)
            modify(l,r,v,2*x+1,lx,mid);
        if(r>mid)
            modify(l,r,v,2*x+2,mid,rx);
        sums[x]=(sums[2*x+1]&sums[2*x+2])|operations[x];
    }
    void modify(ll l,ll r,ll v){
        modify(l,r,v,0,0,size);
    }
    ll sum(ll l,ll r,ll x,ll lx,ll rx){
        if(lx>=r || rx<=l) return 2147483647;
        if(lx>=l && rx<=r) return sums[x];
        ll mid=lx+(rx-lx)/2;
        ll u1=2147483647,u2=2147483647;
        u1=sum(l,r,2*x+1,lx,mid);
        u2=sum(l,r,2*x+2,mid,rx);
        //cout<<lx<<' '<<rx<<' '<<u1<<' '<<u2<<endl;
        return (u1 & u2)| operations[x];
    }
    ll sum(ll l,ll r){
        return sum(l,r,0,0,size);
    }
    void pr(){
        FOR(i,0,2*size-1)
            cout<<sums[i]<<' ';
        cout<<endl;
    }
};
int main(){
    fastio
    ll n,m,ch,l,r,v;
    cin>>n>>m;
    segtree st(n);
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
       // st.pr();
    }
}