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
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll r,g;
	cin>>r>>g;
	ll sum=r+g,h=0;
	for(h=0;h*(h+1)/2<=sum;h++);
	h--;
	// chota rakhne keliye
	if(r>g)
		swap(r,g);
	ll dp[2][r+1];
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	FOR(i,1,h){
		ll gc=(i*(i+1)/2);
		FOR(j,0,r){
			dp[i%2][j]=0;
			if(j>=i){
				dp[i%2][j]+=dp[(i+1)%2][j-i];
				dp[i%2][j]%=mod;
			}
			// avail green
			if(gc>=0 && g-gc>=0){
				dp[i%2][j]+=dp[(i+1)%2][j];
				dp[i%2][j]%=mod;
			}
			gc--;
		}
	}
	ll ans=0;
	FOR(i,0,r){
		ans=(ans+dp[h%2][i])%mod;
	}
	cout<<ans;
}