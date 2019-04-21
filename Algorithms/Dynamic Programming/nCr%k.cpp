// Program to find nCr%k
// Link :https://practice.geeksforgeeks.org/problems/ncr/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
long dp[1001][1001];
void init(){
	for(int i=0;i<1001;i++){
		dp[i][0]=1;
		dp[i][i]=1;
		dp[i][1]=i;
	}
	for(int i=2;i<1001;i++){
		for(int j=2;j<i;j++)
			dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%1000000007;
	}
}
int main(){
	int t,n,r;
	cin>>t;
	init();
	while(t--){
		cin>>n>>r;
		cout<<dp[n][r]<<endl;
	}
}