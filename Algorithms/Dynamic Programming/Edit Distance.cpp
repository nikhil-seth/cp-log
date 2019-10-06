// Edit Distance
// https://practice.geeksforgeeks.org/problems/edit-distance/0
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
	    string s1,s2;
	    cin>>s1>>s2;
	    int dp[n+1][m+1];
	    FOR(i,0,n)
	        dp[i][0]=i;
	    FOR(i,0,m)
	        dp[0][i]=i;
	    FOR(i,1,n){
	        FOR(j,1,m){
	            if(s1[i-1]==s2[j-1])
	                dp[i][j]=dp[i-1][j-1];
	            else
	                dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
	        }
	    }
	    cout<<dp[n][m]<<endl;
	}
}