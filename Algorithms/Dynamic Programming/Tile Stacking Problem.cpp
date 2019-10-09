// https://www.geeksforgeeks.org/tile-stacking-problem/
// Tile Stacking Problem
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
int maxn=1010;
int main(){
	fastio
	fio
	int n,k,m;
	cin>>n>>m>>k;
	int dp[m+1][n+1];
	// Base case 1: when no tiles, but height reqd !=0.
	FOR(i,1,n)
		dp[0][i]=0;
	// Base Case 2: When No height left, basecase=1;
	FOR(i,0,m)
		dp[i][0]=1;
	FOR(i,1,m){
		FOR(j,1,n){
			dp[i][j]=dp[i][j-1];
			dp[i][j]+=dp[i-1][j];
			if(j-k-1>=0)
				dp[i][j]-=dp[i-1][j-k-1];
		}
	}
	FOR(i,0,m){
		FOR(j,0,n)
			cout<<dp[i][j]<<' ';
		cout<<endl;
	}
	cout<<dp[m][n]<<endl;
}