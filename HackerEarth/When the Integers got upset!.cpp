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
ll arr[13],p[13],calc;
ll dp[(1LL<<13)][13][13];
ll INF=1e9,n;
int countBit(ll x){
	return __builtin_popcountll(x);
}
ll solve(ll mask,ll i1,ll i2){
	if(mask==calc) return 0;
	if(dp[mask][i1][i2]!=-1) return dp[mask][i1][i2];
	ll ans=INF;
	ll ctr=countBit(mask);
	//cout<<mask<<' '<<i1<<' '<<i2<<endl;
	FOR(i,1,n){
		//cout<<i<<' '<<((mask>>i)&1)<<endl;
		if((mask>>i)&1LL) continue;
		if(i1==0 || i2==0){
			ans=min(ans,solve(mask|(1LL<<i),i,i1));
		}
		else{
			ll t1=arr[i];
			t1^=arr[i1];
			t1^=arr[i2];
			t1*=p[ctr+1];
			ans=min(ans,t1+solve(mask|(1LL<<i),i,i1));
		}
	}
	return dp[mask][i1][i2]=ans;
}
int main(){
	fastio
	ll t;
	cin>>t;
	while(t--){
		cin>>n;
		FOR(i,1,n) cin>>arr[i];
		FOR(i,1,n) cin>>p[i];
		calc=(1LL<<(n+1))-2;
		memset(dp,-1,sizeof(dp));
		ll ans=solve(0,0,0);
		cout<<ans<<endl;
	}
	/*FOR(i,0,calc){
		cout<<"i :"<<i<<endl;
		FOR(j,0,n-1){
			FOR(k,0,n-1){
				cout<<dp[i][j][k]<<' ';
			}
			cout<<endl;

		}*/
}