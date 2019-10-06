// https://practice.geeksforgeeks.org/problems/longest-common-subsequence/0
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
	    string s1,s2;
	    int n,m;
	    cin>>n>>m;
	    cin>>s1>>s2;
	    int dp[2][m+1];
	    FOR(i,0,n){
	        FOR(j,0,m){
	            if(i==0 || j==0)
	                dp[i%2][j]=0;
	            else if(s1[i-1]==s2[j-1])
	                dp[i%2][j]=dp[(i-1)%2][j-1]+1;
	            else 
	                dp[i%2][j]=max(dp[(i-1)%2][j],dp[i%2][j-1]);
	        }
	    }
	    cout<<dp[n%2][m]<<endl;
	}
}