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
    vector<ll> sums;
    segtree(ll n){
        size=1;
        while(size<n) size<<=1;
        sums=vector<ll>(size*2,0);
    }
    void set(ll l,ll r,ll v,ll x,ll lx,ll rx){
        if(lx>=r || rx<=l) return;
        if(lx>=l && rx<=r){
            sums[x]+=v;
            return;
        }
        ll mid=lx+(rx-lx)/2;
        set(l,r,v,2*x+1,lx,mid);
        set(l,r,v,2*x+2,mid,rx);
    }
    void set(ll l,ll r,ll v){
        set(l,r,v,0,0,size);
    }
    ll find(ll i,ll x,ll lx,ll rx){
        if(rx-lx==1) return sums[x];
        ll mid=lx+(rx-lx)/2;
        if(i<mid)
            return sums[x]+find(i,2*x+1,lx,mid);
        else
            return sums[x]+find(i,2*x+2,mid,rx);
    }
    ll find(ll i){
        return find(i,0,0,size);
    }
};
int main(){
    fastio
    ll n,q,ch,x,y,v;
    cin>>n>>q;
    segtree st(n);
    while(q--){
        cin>>ch;
        if(ch==1){
            cin>>x>>y>>v;
            st.set(x,y,v);
        }
        else{
            cin>>x;
            cout<<st.find(x)<<endl;
        }
        //cout<<"asd"<<endl;
    }
}