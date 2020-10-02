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
int main(){
    fastio
    ll t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k;
        map<ll,ll> m;
        FOR(i,0,n-1){
            cin>>x;
            m[(k-x%k)%k]+=1;
        }
        ll mval=0,idx=0;
        for(auto it:m){
            if(it.first==0)
                continue;
            if(it.second>mval){
                mval=it.second;
                idx=it.first;
            }
            else if(it.second==mval)
                idx=max(idx,it.first);
        }
        if(mval==0)
            cout<<0<<endl;
        else{
            ll ans=(mval-1)*k+idx;
            cout<<ans+1<<endl;
        }
    }
}