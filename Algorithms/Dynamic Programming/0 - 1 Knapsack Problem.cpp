// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem/0
// 0 - 1 Knapsack Problem
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
	    int n,W;
	    cin>>n>>W;
	    int wt[n],val[n];
	    FOR(i,0,n-1)
	        cin>>val[i];
	    FOR(i,0,n-1)
	        cin>>wt[i];
	    int dp[2][W+1];
	    FOR(i,0,W)
	        dp[0][i]=0;
	    FOR(i,1,n){
	        FOR(j,0,W){
	            if(j==0){
	                dp[i%2][j]=0;
	                continue;
	            }
                dp[i%2][j]=dp[(i+1)%2][j];
                if(j>=wt[i-1])
	                dp[i%2][j]=max(dp[i%2][j],dp[(i+1)%2][j-wt[i-1]]+val[i-1]);
	        }
	    }
	    int ans=0;
	    FOR(i,0,W)
	        ans=max(ans,dp[n%2][i]);
	    cout<<ans<<endl;
	}
}