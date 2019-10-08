// https://www.geeksforgeeks.org/minimum-removals-array-make-max-min-k/
// Minimum removals from array to make max – min <= K

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
	int n,k;
	cin>>n;
	int arr[n];
	FORA(x,arr) cin>>x;
	cin>>k;
	sort(arr,arr+n);
	int dp[n][n];
	FOR(j,0,n-1){
		for(int i=n-1;i>=0;i--){
			dp[i][j]=n+1;
			if(i>j)
				continue;
			else if(i==j)
				dp[i][j]=n-1;
			else if(i==n-1)
				dp[i][j]=dp[i][j-1]+1;
			else if(j==0)
				dp[i][j]=dp[i+1][j]+1;
			else if(arr[j]-arr[i]<=k)
				dp[i][j]=0;
			else
				dp[i][j]=min(dp[i][j-1],dp[i+1][j])+1;
		}
	}
	cout<<dp[0][n-1]<<endl;
}