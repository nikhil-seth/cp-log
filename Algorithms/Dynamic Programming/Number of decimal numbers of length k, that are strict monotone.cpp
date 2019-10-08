// https://www.geeksforgeeks.org/number-decimal-numbers-length-k-strict-monotone/
// Number of decimal numbers of length k, that are strict monotone

#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
	fastio
	fio
	int n;
	cin>>n;
	int dp[10][n];
	FOR(i,0,9)
		dp[i][0]=1;
	dp[0][0]=0;
	FOR(j,1,n-1){
		FOR(i,0,9){
			if(i==0)
				dp[i][j]=0;
			else
				dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
		}
	}
	ll ans=0;
	FOR(i,1,9)
		ans+=dp[i][n-1];
	cout<<ans;
}