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
	int n;
	cin>>n;
	int arr[n];
	FORA(x,arr) cin>>x;
	if(arr[0]==0){
		cout<<-1;
		return 0;
	}
	int dp[n];
	dp[n-1]=0;
	for(int i=n-2;i>=0;i--){
		int mxm=n-i+1;
		for(int j=i+1;j<min(i+arr[i]+1,n);j++){
			if(dp[j]==-1)
				continue;
			mxm=min(mxm,dp[j]);
		}
		if(mxm==n-i+1)
			dp[i]=-1;
		else
			dp[i]=mxm+1;
	}
	cout<<dp[0]<<endl;
}