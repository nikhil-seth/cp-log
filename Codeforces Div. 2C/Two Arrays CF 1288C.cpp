#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mod 1000000007
using namespace std;
ll mult(ll a,ll b){
	a=(a*b)%mod;
	return a;
}
ll addn(ll a,ll b){
	a+=b;
	a%=mod;
	return a;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll n,m;
	cin>>n>>m;
	//cout<<n+2*m<<' '<<2*m+1<<endl;
	ll dp[n+2*m][2*m+1];
	memset(dp,0,sizeof(dp));
	for(ll i=0;i<n+2*m;i++){
		for(ll j=0;j<=min(i,2*m);j++){
			if(j==0 || j==i)
				dp[i][j]=1;
			else
				dp[i][j]=addn(dp[i-1][j-1],dp[i-1][j]);
			//cout<<dp[i][j]<<' ';
		}
		//cout<<endl;
	}
	cout<<dp[n+2*m-1][2*m];
}