#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll s,n;
	while(1){
		cin>>s>>n;
		if(s==0 && n==0)
			break;
		int w[n+1],v[n+1];
		FOR(i,1,n){
			cin>>w[i]>>v[i];
		}
		pair<int,int> dp[n+1][s+1];
		FOR(i,0,n){
			FOR(j,0,s){
				if(i==0 || j==0){
					dp[i][j]=mp(0,0);
					continue;
				}
				dp[i][j]=dp[i-1][j];
				if(j>=w[i]){
					if(dp[i][j].first==dp[i-1][j-w[i]].first+v[i])
						dp[i][j].second=min(dp[i][j].second,dp[i-1][j-w[i]].second+w[i]);
					else if(dp[i][j].first<dp[i-1][j-w[i]].first+v[i]){
						dp[i][j]=dp[i-1][j-w[i]];
						dp[i][j].first+=v[i];
						dp[i][j].second+=w[i];
					}
				}
			}
		}
		cout<<dp[n][s].second<<' '<<dp[n][s].first<<endl;
	}
}
