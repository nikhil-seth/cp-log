// https://www.geeksforgeeks.org/highway-billboard-problem/
// Highway Billboard Problem
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
int maxn=1010;
int main(){
	fastio
	fio
	int n,t;
	cin>>n>>t;
	int rev[n],pos[n];
	FORA(x,pos)	cin>>x;
	FORA(x,rev)	cin>>x;
	int dp[n],ans=0;
	dp[n-1]=rev[n-1];
	for(int i=n-2;i>=0;i--){
		int placed=0,nplaced=0;
		for(int j=i+1;j<n;j++){
			if(pos[j]-pos[i]<=t)
				nplaced=max(nplaced,dp[j]);
			else
				placed=max(placed,dp[j]);
		}
		dp[i]=max(rev[i]+placed,nplaced);
		ans=max(ans,dp[i]);
	}
	cout<<ans<<endl;
}