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
    vector<bool> operations;
    segtree(ll n){
        size=1;
        while(size<n) size<<=1;
        sums=vector<ll>(size*2,0);
        operations=vector<bool>(size*2,0);
    }
    void modify(ll l,ll r,ll v,ll x,ll lx,ll rx){
        if(lx>=r || rx<=l) return;  // No Update.
        if(lx>=l && rx<=r){
            sums[x]=(rx-lx-sums[x]);
            operations[x]=1-operations[x];
            return;
        }
        ll mid=lx+(rx-lx)/2;
        if(operations[x]){
            modify(lx,mid,operations[x],2*x+1,lx,mid);
            modify(mid,rx,operations[x],2*x+2,mid,rx);
            operations[x]=0;
        }
        modify(l,r,v,2*x+1,lx,mid);
        modify(l,r,v,2*x+2,mid,rx);
        sums[x]=sums[2*x+1]+sums[2*x+2];
    }
    void modify(ll l,ll r,ll v){
        modify(l,r,v,0,0,size);
    }
    ll sum(ll l,ll r,ll x,ll lx,ll rx){
        if(rx-lx==1) return lx;
        ll mid=lx+(rx-lx)/2;
        if(operations[x]){
            modify(lx,mid,operations[x],2*x+1,lx,mid);
            modify(mid,rx,operations[x],2*x+2,mid,rx);
            operations[x]=0;
        }
        if(sums[2*x+1]<=l)
            return sum(l-sums[2*x+1],r,2*x+2,mid,rx);
        else
            return sum(l,r,2*x+1,lx,mid);
    }
    ll sum(ll l,ll r){
        if(sums[0]<l) return -1;
        return sum(l,0,0,0,size);
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
        cin>>ch;
        if(ch==1){
            cin>>l>>r;
            st.modify(l,r,0);
        }
        else{
            cin>>l;
            cout<<st.sum(l,0)<<endl;
        }
    }
}