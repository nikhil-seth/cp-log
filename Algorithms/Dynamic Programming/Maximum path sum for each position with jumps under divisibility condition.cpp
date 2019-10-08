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
	int arr[n+1];
	FOR(i,1,n)
		cin>>arr[i];
	int dp[n+1];
	dp[n]=arr[n];
	for(int i=1;i<=n;i++){
		int mxm=0;
		for(int j=1;j<i;j++){
			if(i%j==0)
				mxm=max(mxm,dp[j]);
		}
		dp[i]=mxm+arr[i];
	}
	FOR(i,1,n)
		cout<<dp[i]<<' ';
	cout<<endl;
}