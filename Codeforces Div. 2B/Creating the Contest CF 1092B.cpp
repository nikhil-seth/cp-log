#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
using namespace std;

int main(){
	fastio
	//fio
	int n;
	cin>>n;
	long arr[n];
	FORA(x,arr)
		cin>>x;
	int dp[n];
	dp[n-1]=1;
	int max_val=1;
	for(int i=n-2;i>=0;i--){
		dp[i]=1;
		if(arr[i+1]<=2*arr[i])
			dp[i]=dp[i+1]+1;
		max_val=max(max_val,dp[i]);		
	}
	cout<<max_val;
}