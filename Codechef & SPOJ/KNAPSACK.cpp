#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
    fastio
    #ifndef ONLINE_JUDGE
    fio
    #endif
    ll s,n;
    cin>>s>>n;
    ll w[n+1],v[n+1];
    FOR(i,1,n)
        cin>>w[i]>>v[i];
    ll dp[2][s+1];
    memset(dp,0,sizeof(dp));
    FOR(i,1,n){
        FOR(j,1,s){
            dp[i%2][j]=dp[(i+1)%2][j];
            if(j>=w[i])
                dp[i%2][j]=max(dp[i%2][j],v[i]+dp[(i+1)%2][j-w[i]]);
        }
    }
    cout<<dp[n%2][s];
}
