// https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence/0
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
	    int n;
	    cin>>n;
	    int arr[n];
	    FORA(x,arr) cin>>x;
	    int dp[n];
	    dp[n-1]=1;
	    int ans=1;
	    for(int i=n-2;i>=0;i--){
	        int mxm=0;
	        FOR(j,i+1,n-1){
	            if(arr[j]>arr[i])
	                mxm=max(mxm,dp[j]);
	        }
	        dp[i]=mxm+1;
	        ans=max(ans,dp[i]);
	    }
	    cout<<ans<<endl;
	}
}