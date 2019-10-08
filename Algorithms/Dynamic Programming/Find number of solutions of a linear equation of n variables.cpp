//https://www.geeksforgeeks.org/find-number-of-solutions-of-a-linear-equation-of-n-variables/
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
	int rhs;
	cin>>rhs;
	int dp[rhs+1];
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	FOR(i,0,n-1){
		FOR(j,arr[i],rhs)
			dp[j]=dp[j]+dp[j-arr[i]];
	}
	cout<<dp[rhs]<<endl;
}
