// nCr
// Link : https://practice.geeksforgeeks.org/problems/ncr/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;

int main(){
	int t;
	cin>>t;
	int n,r;
	long p=1000000007;
	while(t--){
		cin>>n>>r;
		if(n<r){
			cout<<0<<endl;
			continue;
		}
		else if(n==r){
		    cout<<1<<endl;
		    continue;
		}
		if(r>(n-r))
			r=n-r;
		long dp[r+1][n+1];
		for(int i=0;i<=r;i++){
		    for(int j=0;j<=n;j++)
		        dp[i][j]=0;
		}
		for(int i=0;i<=n;i++)
			dp[0][i]=1;
		for(int i=1;i<=n;i++){
			int j=1;
			while(j<=i && j<=r){
				dp[j][i]=(dp[j-1][i-1]+dp[j][i-1])%p;
				j++;
			}
		}
		cout<<dp[r][n];
		cout<<endl;
	}
}
