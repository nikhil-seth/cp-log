// Knapsack with Duplicate Items
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
	    int n,w;
	    cin>>n>>w;
	    int wt[n],val[n];
	    FORA(x,val) cin>>x;
	    FORA(x,wt) cin>>x;
	    int dp[w+1];
	    memset(dp,0,sizeof(dp));
	    FOR(i,1,w){
	        FOR(j,0,n-1){
	            if(i>=wt[j])
	                dp[i]=max(dp[i],dp[i-wt[j]]+val[j]);
            }
        }
        cout<<dp[w]<<endl;
	}
}