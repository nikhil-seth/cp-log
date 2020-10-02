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
    vector<vector<bool>> sums;
    void update(vector<bool> &x,vector<bool> &y){
        FOR(i,1,40)
            x[i]=(x[i]||y[i]);
    }
    void update(ll x){
        sums[x]=vector<bool>(41,0);
        FOR(i,0,41)
            sums[x][i]=sums[2*x+1][i]||sums[2*x+2][i];
    }
    segtree(ll n){
        size=1;
        while(size<n) size<<=1;
        sums=vector<vector<bool>>(size*2,vector<bool>(41,0));
    }
    void build(vector<ll> &a,ll x,ll lx,ll rx){
        if(rx-lx==1){
            if(lx<a.size())
                sums[x][a[lx]]=1;
            return;
        }
        ll mid=lx+(rx-lx)/2;
        build(a,2*x+1,lx,mid);
        build(a,2*x+2,mid,rx);
        update(x);
    }
    void build(vector<ll> &a){
        build(a,0,0,size);
    }
    void set(ll i,ll v,ll x,ll lx,ll rx){
        if(rx-lx==1){
            sums[x]=vector<bool>(41,0);
            sums[x][v]=1;
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
    vector<bool> find(ll l,ll r,ll x,ll lx,ll rx){
        if(l<=lx && r>=rx) return sums[x];
        if(l>=rx || r<=lx) return vector<bool>(41,0);
        ll mid=lx+(rx-lx)/2;
        vector<bool> v(41,0);
        vector<bool> u;
        u=find(l,r,2*x+1,lx,mid);
        update(v,u);
        u=find(l,r,2*x+2,mid,rx);
        update(v,u);
        return v;
    }
    ll find(ll x,ll y){
        vector<bool> v(41,0);
        v=find(x,y,0,0,size);
        ll ctr=0;
        FOR(i,1,40)
            ctr+=v[i];
        return ctr;
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