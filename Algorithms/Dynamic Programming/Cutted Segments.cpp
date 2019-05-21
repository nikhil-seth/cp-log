// Cutted Segments
// Link : https://practice.geeksforgeeks.org/problems/cutted-segments/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;

int main(){
	int t,n,x,y,z;
	cin>>t;
	while(t--){
		cin>>n>>x>>y>>z;
		long dp[n+1];
		dp[0]=1;
		int min_val=min(min(x,y),z);
		for(int i=1;i<min_val;i++)
			dp[i]=0;
		for(int i=min_val;i<=n;i++){
			dp[i]=0;
			if(i-x>=0 && dp[i-x]!=0)
				dp[i]=dp[i-x]+1;
			if(i-y>=0 && dp[i-y]!=0)
				dp[i]=max(dp[i],dp[i-y]+1);
			if(i-z>=0 && dp[i-z]!=0)
				dp[i]=max(dp[i],dp[i-z]+1);
		}
		cout<<dp[n]-1<<endl;
	}
}
