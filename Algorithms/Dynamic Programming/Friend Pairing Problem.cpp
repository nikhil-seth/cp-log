// Friend pairing Problem : https://practice.geeksforgeeks.org/problems/friends-pairing-problem/0
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
	ll dp[101];
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=100;i++){
	   dp[i]=(dp[i-2]*((i-1)%mod1))%mod1;
	   dp[i]=(dp[i]+dp[i-1])%mod1;
	}
	while(t--){
	    int n;
	    cin>>n;
	    cout<<dp[n]<<endl;
	}
}