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
        while(size<n)
            size<<=1;
        sums=vector<ll>(size*2);
    }
    void update(ll x){
        ll l=2*x+1,r=2*x+2;
        sums[x]=max(sums[l],sums[r]);
    }
    void set(ll i,ll v,ll x,ll lx,ll rx){
        if(rx-lx==1){
            sums[x]=v;
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
    void build(vector<ll> &a,ll x,ll lx,ll rx){
        if(rx-lx==1){
            // Node found.
            if(lx<a.size())
                sums[x]=a[lx];
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
    ll find(ll v,ll l,ll x,ll lx,ll rx){
        //cout<<x<<' ';
        if(rx-lx==1)
            return lx;
        ll mid=lx+(rx-lx)/2;
        if(sums[2*x+1]>=v && mid>l){
            ll ans=find(v,l,2*x+1,lx,mid);
            if(ans!=-1) return ans;
        }
        if(sums[2*x+2]>=v && rx>l){
            ll ans=find(v,l,2*x+2,mid,rx);
            if(ans!=-1) return ans;
        }
        return -1;
    }
    ll find(ll v,ll l){
        if(sums[0]<v) return -1;
        return find(v,l,0,0,size);
    }
    void pr(){
        FOR(i,0,2*size-1)
            cout<<sums[i]<<' ';
        cout<<endl;
    }
};
int main(){
    fastio
    ll n,m,i,v,ch;
    cin>>n>>m;
    vector<ll> arr(n);
    FORA(x,arr) cin>>x;
    segtree st(n);
    st.build(arr);
    //st.pr();
    while(m--){
        cin>>ch;
        if(ch==1){
            ll i,v;
            cin>>i>>v;
            st.set(i,v);
        }
        else{
            ll v,l;
            cin>>v>>l;
            cout<<st.find(v,l)<<endl;
        }
    }
}
