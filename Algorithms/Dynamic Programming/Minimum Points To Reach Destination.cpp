// https://practice.geeksforgeeks.org/problems/minimum-points-to-reach-destination/0
// Minimum Points To Reach Destination
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
	    int n,m;
	    cin>>n>>m;
	    int arr[n][m];
	    FOR(i,0,n-1){
	        FOR(j,0,m-1)
	            cin>>arr[i][j];
	    }
	    int dp[n][m];
	    for(int i=n-1;i>=0;i--){
	        for(int j=m-1;j>=0;j--){
	            if(i==n-1 && j==m-1){
	                if(arr[i][j]>=0)
	                    dp[i][j]=1; // Atleast 1 reqd pt.
	                else
	                    dp[i][j]=-1*arr[i][j]+1;
	                    // We Need reqd+1 pts.
	                    continue;
	            }
	            else if(i==n-1)
	                dp[i][j]=dp[i][j+1];
	            else if(j==m-1)
	                dp[i][j]=dp[i+1][j];
	            else
	                dp[i][j]=min(dp[i+1][j],dp[i][j+1]);
	            if(arr[i][j]>0)
	                dp[i][j]=max(dp[i][j]-arr[i][j],0);
	            else if(dp[i][j]==0)
	                dp[i][j]=-1*(arr[i][j]-1);
	            else
	                dp[i][j]-=arr[i][j];
	        }
	    }
	    if(dp[0][0]==0)
	        cout<<1;
	    else
	        cout<<dp[0][0];
	    cout<<endl;
	}
}
