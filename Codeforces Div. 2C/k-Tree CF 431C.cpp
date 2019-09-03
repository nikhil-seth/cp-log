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
	//fio
	int n,k,d;
	cin>>n>>k>>d;
	long dp[n+1][2];
	dp[0][0]=1;
	dp[0][1]=0;
	for(int i=1;i<=n;i++){
		dp[i][0]=dp[i][1]=0;
		for(int j=1;j<=k && i-j>=0;j++){
			if(j<d){
				dp[i][0]=(dp[i][0]+dp[i-j][0])%mod1;
				dp[i][1]=(dp[i][1]+dp[i-j][1])%mod1;
			}
			else{
				dp[i][1]=(dp[i][1]+dp[i-j][0])%mod1;
				dp[i][1]=(dp[i][1]+dp[i-j][1])%mod1;
			}
		}
	}
	cout<<dp[n][1];
}