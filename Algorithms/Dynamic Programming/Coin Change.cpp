// https://practice.geeksforgeeks.org/problems/coin-change/0
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
	    cin>>m;
	    int c[m];
	    for(int i=0;i<m;i++)
	        cin>>c[i];
	    cin>>n;
	    int dp[n+1];
	    memset(dp,0,sizeof(dp));
	    dp[0]=1;
	    for(int i=0;i<m;i++){
	        for(int j=c[i];j<=n;j++)
	            dp[j]=dp[j]+dp[j-c[i]];
	    }
	    cout<<dp[n]<<endl;
	}
}