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
long d[1000001];
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	long n;
	cin>>n;
	vector<bool> vis(n+1,1);
	for(long i=2;i<=n;i++){
		if(d[i]==0){
			for(ll j=i;j<=n;j+=i)
				d[j]=i;
		}
	}
	int dp[n+1];
	dp[0]=0;
	dp[1]=dp[2]=dp[3]=1;
	FOR(i,4,n){
		int ans=INT_MAX;
		int n2=i;
		while(n2>1){
			ans=min(ans,dp[i-d[n2]]);
			int xt=d[n2];
			while(n2%xt==0)
				n2/=xt;
		}
		dp[i]=ans+1;
	}
	cout<<dp[n];
}