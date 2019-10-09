//https://www.geeksforgeeks.org/longest-increasing-odd-even-subsequence/
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
int main(){
	fastio
	fio
	int n;
	cin>>n;
	int arr[n];
	FORA(x,arr) cin>>x;
	int dp[n];
	bool flag=0;
	dp[n-1]=1;
	int ans=1;
	for(int i=n-2;i>=0;i--){
		if(arr[i]%2==0)
			flag=1;
		else
			flag=0;
		int mxm=0;
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[i] && ((arr[j]%2==0)^flag))
				mxm=max(mxm,dp[j]);
		}
		dp[i]=mxm+1;
		ans=max(ans,dp[i]);
	}
	cout<<ans<<endl;
}
