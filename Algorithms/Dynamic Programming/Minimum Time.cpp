// Minimum Time
// https://practice.geeksforgeeks.org/problems/minimum-time/0
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
	    int n,ins,del,cpy;
	    cin>>n>>ins>>del>>cpy;
	    int dp[n+1];
	    memset(dp,0,sizeof(dp));
	    dp[1]=ins;
	    for(int i=2;i<=n;i++){
	        if(i%2==0)
	            dp[i]=min(dp[i-1]+ins,dp[i/2]+cpy);
	        else
	            dp[i]=min(dp[i-1]+ins,dp[(i+1)/2]+cpy+del);
	    }
	    cout<<dp[n]<<endl;
	}
}