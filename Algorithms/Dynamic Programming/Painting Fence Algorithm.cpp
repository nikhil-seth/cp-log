// https://practice.geeksforgeeks.org/problems/painting-the-fence/0
#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
    fastio
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll same=0,diff=k;
        ll dp[2];
        dp[1]=k%mod1;
        for(ll i=2;i<=n;i++){
            same=diff;
            diff=dp[(i-1)%2]*(k-1);
            diff=diff%mod1;
            dp[i%2]=(diff+same)%mod1;
        }
        cout<<dp[n%2]<<endl;
    }
}