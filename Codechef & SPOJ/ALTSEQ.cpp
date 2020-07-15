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
	ll n;
	cin>>n;
	ll arr[n];
	FORA(x,arr)
		cin>>x;
	ll dp[n];
	mms(dp);
	dp[n-1]=1;
	ll ans=1;
	for(int i=n-2;i>=0;i-=1){
		for(int j=i+1;j<n;j+=1){
			if((arr[i]<0)^(arr[j]<0) && abs(arr[i])<abs(arr[j]))
				dp[i]=max(dp[i],dp[j]);
		}
		dp[i]+=1;
		ans=max(ans,dp[i]);
	}
	cout<<ans;
}