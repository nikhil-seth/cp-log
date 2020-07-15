#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	ll n,m,k;
	cin>>n>>m>>k;
	ll dp[n+1][k+1];
	memset(dp,0,sizeof(dp));
	ll arr[n+1];
	arr[0]=0;
	FOR(i,1,n){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
	FOR(i,1,n){
		FOR(j,1,k){
			dp[i][j]=dp[i-1][j];
			if(i>=m)
				dp[i][j]=max(dp[i][j],dp[i-m][j-1]+arr[i]-arr[i-m]);
		}
	}
	cout<<dp[n][k];
}
