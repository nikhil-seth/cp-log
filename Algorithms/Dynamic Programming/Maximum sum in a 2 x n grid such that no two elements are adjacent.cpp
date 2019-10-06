// https://practice.geeksforgeeks.org/problems/adjacents-are-not-allowed/0
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
	    int mat[2][n];
	    FOR(i,0,1){
	        FOR(j,0,n-1)
	            cin>>mat[i][j];
	    }
	    int dp[n];
	    dp[n-1]=max(mat[0][n-1],mat[1][n-1]);
	    dp[n-2]=max(dp[n-1],max(mat[0][n-2],mat[1][n-2]));
	    for(int i=n-3;i>=0;i--){
	        dp[i]=max(dp[i+1],dp[i+2]+max(mat[0][i],mat[1][i]));
	    }
	    cout<<dp[0]<<endl;
	}
}