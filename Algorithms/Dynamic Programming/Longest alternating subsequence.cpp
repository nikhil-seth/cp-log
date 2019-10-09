// Longest alternating subsequence
// https://practice.geeksforgeeks.org/problems/longest-alternating-subsequence/0
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
	    int n,ans=1;
	    cin>>n;
	    int arr[n];
	    FORA(x,arr) cin>>x;
	    int dp[2][n];
	    dp[0][n-1]=1;
	    dp[1][n-1]=1;
	    for(int i=n-2;i>=0;i--){
	        int l=0,r=0;
	        for(int j=i+1;j<n;j++){
	            if(arr[i]<arr[j])
	                l=max(l,dp[1][j]);
	            else if(arr[i]>arr[j])
	                r=max(r,dp[0][j]);
	        }
	        dp[0][i]=l+1;
	        dp[1][i]=r+1;
	        ans=max(ans,max(dp[0][i],dp[1][i]));
	    }
	    cout<<ans<<endl;
    }
}
