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
	ll t,n;
	ll mod=1e9+7;
	vector<ll> dp(1e5+1);
	dp[0]=1;
	dp[1]=0;
	FOR(i,2,1e5){
		dp[i]=(((i-1)%mod)*((dp[i-1]+dp[i-2])%mod))%mod;
	}
	cin>>t;
	while(t--){
		cin>>n;
		cout<<dp[n]<<endl;
	}
}
