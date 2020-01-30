#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
ll dp[31][31];
void init(){
	FOR(i,0,30){
		FOR(j,0,i){
			if(j==0 || j==i)
				dp[i][j]=1;
			else
				dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n,b,g;
	cin>>b>>g>>n;
	ll ans=0,ans2;
	init();
	for(int i=max(4,n-g);i<=min(n-1,b);i++){
		ans2=dp[b][i];
		ans2*=dp[g][n-i];
		ans+=ans2;
	}
	cout<<ans;
}
