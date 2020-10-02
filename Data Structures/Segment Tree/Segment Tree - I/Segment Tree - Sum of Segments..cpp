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
    int size;
    vector<ll> sums;
    void init(int n){
        size=1;
        while(size<n)
            size<<=1;
        sums=vector<ll>(size*2,0);
    }
    void build(vector<int> &a,int x,int lx,int rx){
        // if we're at bottom of tree, then check 
        // that segment posn is in array
        if(rx-lx==1){
            // leaf cond.
            if(lx<int(a.size()))
                sums[x]=a[lx];
            return;
        }
        int mid=lx+(rx-lx)/2;
        build(a,2*x+1,lx,mid);
        build(a,2*x+2,mid,rx);
        sums[x]=sums[2*x+1]+sums[2*x+2];
    }
    void build(vector<int> &a){
        build(a,0,0,size);
    }
    void set(int i,ll v,int x,int lx,int rx){
        // x-> index of st,lx,rx->segments current.
        // Case when 1 element in segment.
        if(rx-lx==1){
            sums[x]=v;
            return;
        }
        // We'll go to left or right.
        int mid=lx+(rx-lx)/2;
        if(i<mid)
            set(i,v,2*x+1,lx,mid);
        else
            set(i,v,2*x+2,mid,rx);

        // Update the sums of this idx
        sums[x]=sums[2*x+1]+sums[2*x+2];
    }
    void set(int i,ll v){
        set(i,v,0,0,size);
    }
    ll sum(int l,int r,int x,int lx,int rx){
        if(rx<=l || r<=lx) return 0;
        if(lx>=l && rx<=r) return sums[x];
        int mid=lx+(rx-lx)/2;
        return sum(l,r,2*x+1,lx,mid)+sum(l,r,2*x+2,mid,rx);
    }
    ll sum(int l,int r){
        return sum(l,r,0,0,size);
    }
};
int main(){
    fastio
    int n,m;
    ll v;
    cin>>n>>m;
    segtree st;
    st.init(n);
    vector<int> a(n);
    FOR(i,0,n-1){
        cin>>a[i];
    }
    st.build(a);
    //cout<<"sad<"<<endl;
    int op;
    while(m--){
        cin>>op;
        if(op==1){
            int i;
            ll v;
            cin>>i>>v;
            st.set(i,v);
        }
        else{
            int l,r;
            cin>>l>>r;
            cout<<st.sum(l,r)<<endl;
        }
    }
}