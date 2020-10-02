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
    vector<ll> operations;
    segtree(ll n){
        size=1;
        while(size<n) size<<=1;
        sums=vector<ll>(size*2,0);
        operations=vector<ll>(size*2,0);
    }
    void modify(ll l,ll r,ll v,ll x,ll lx,ll rx){
        if(lx>=r || rx<=l) return;  // No Update.
        if(lx>=l && rx<=r){
            sums[x]+=v;
            operations[x]+=v;
            return;
        }
        ll mid=lx+(rx-lx)/2;
        modify(l,r,v,2*x+1,lx,mid);
        modify(l,r,v,2*x+2,mid,rx);
        sums[x]=max(sums[2*x+1],sums[2*x+2])+operations[x];
    }
    void modify(ll l,ll r,ll v){
        modify(l,r,v,0,0,size);
    }
    ll sum(ll v,ll l,ll x,ll lx,ll rx){
        if(rx-lx==1){
        //    cout<<"Check ";
        //    cout<<v<<' '<<lx<<' '<<rx<<' '<<sums[x]<<' '<<operations[x]<<endl;
            if(sums[x]<v) return -1;
            return lx;
        }
        //cout<<v<<' '<<lx<<' '<<rx<<' '<<sums[x]<<' '<<operations[x]<<endl;
        ll idx=-1,mid=lx+(rx-lx)/2;
        v-=operations[x];
        if(sums[2*x+1]>=v && l<mid){
            idx=sum(v,l,2*x+1,lx,mid);
            if(idx!=-1) return idx;
        }
        if(sums[2*x+2]>=v)
            idx=sum(v,l,2*x+2,mid,rx);
        return idx;
    }
    ll sum(ll x,ll l){
        return sum(x,l,0,0,size);
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
            cin>>v>>l;
            cout<<st.sum(v,l)<<endl;
        }
        //st.pr();
    }
}