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
	    int mat[n][m];
	    int dp[n][2];
	    FOR(i,0,n-1){
	        FOR(j,0,m-1){
	            cin>>mat[i][j];
	        }
	    }
	    FOR(i,0,n-1)
	        dp[i][(m-1)%2]=mat[i][m-1];
	    for(int i=m-2;i>=0;i--){
	        for(int j=0;j<n;j++){
                dp[j][i%2]=dp[j][(i+1)%2];
                if(j!=0)
	                dp[j][i%2]=max(dp[j][i%2],dp[j-1][(i+1)%2]);
	            if(j!=n-1)
	                dp[j][i%2]=max(dp[j][i%2],dp[j+1][(i+1)%2]);
	           dp[j][i%2]+=mat[j][i];
	        }
	    }
	    int ans=INT_MIN;
	    FOR(i,0,n-1)
	        ans=max(ans,dp[i][0]);
	   cout<<ans<<endl;
	}
}