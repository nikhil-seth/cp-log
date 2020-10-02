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
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        string s;
        cin>>s;
        ll ic=m+1,x;
        vector<int> v(n+1,0);
        FOR(i,0,m-1){
            cin>>x;
            v[x]+=1;
        }
        vector<ll> ans(26,0);
        for(int i=0;i<n;i+=1){
            ic-=v[i];
            ans[s[i]-'a']+=ic;
        }
        FOR(i,0,25)
            cout<<ans[i]<<' ';
        cout<<endl;
    }
}