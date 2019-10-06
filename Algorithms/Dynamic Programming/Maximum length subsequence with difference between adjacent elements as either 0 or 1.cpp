// https://www.geeksforgeeks.org/maximum-length-subsequence-difference-adjacent-elements-either-0-1/
#include<bits/stdc++.h>
#include<stdlib.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
    fastio
    fio
    int n;
    cin>>n;
    int arr[n];
    FORA(x,arr) cin>>x;
    int dp[11];
    memset(dp,0,sizeof(dp));
    dp[arr[0]]=1;
    int ans=1;
    FOR(i,1,n-1){
        dp[arr[i]]=max(dp[arr[i]+1],max(dp[arr[i]-1],dp[arr[i]]))+1;
        ans=max(ans,dp[arr[i]]);
    }
    cout<<ans<<endl;
}