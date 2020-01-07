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
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n;
	cin>>n;
	bool dp[101];
	dp[0]=dp[1]=dp[2]=dp[4]=dp[5]=0;
	dp[3]=dp[6]=dp[7]=1;
	FOR(i,8,100){
		dp[i]=dp[i-3] || dp[i-7];
	}
	while(n--){
		int x;
		cin>>x;
		if(dp[x]==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}