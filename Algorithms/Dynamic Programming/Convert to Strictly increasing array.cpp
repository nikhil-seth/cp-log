// https://practice.geeksforgeeks.org/problems/convert-to-strictly-increasing-array/0
// Convert to Strictly increasing array
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
	    int n,len=0;
	    cin>>n;
	    int arr[n];
	    FORA(x,arr) cin>>x;
	    int dp[n];
	    FOR(i,0,n-1)
	        dp[i]=1;
	    FOR(i,1,n-1){
	        for(int j=0;j<i;j++){
	            if(arr[i]>arr[j] && (i-j)<=(arr[i]-arr[j]))
	                dp[i]=max(dp[i],1+dp[j]);
	        }
	        len=max(len,dp[i]);
	    }
	    cout<<n-len<<endl;
	}
}