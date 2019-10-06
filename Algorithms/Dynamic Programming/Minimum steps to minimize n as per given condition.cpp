// Minimum steps to minimize n as per given condition
// https://practice.geeksforgeeks.org/problems/minimum-steps-to-minimize-n-as-per-given-condition/0
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
	    int dp[n+1];
	    dp[1]=0;
	    for(int i=2;i<=n;i++){
	       dp[i]=dp[i-1];
	       if(i%2==0)
	            dp[i]=min(dp[i],dp[i/2]);
	       if(i%3==0)
	            dp[i]=min(dp[i],dp[i/3]);
	       dp[i]+=1;
	    }
	    cout<<dp[n]<<endl;
	}
}