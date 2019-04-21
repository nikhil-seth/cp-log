// Program to find nth Bell Numbers or No of ways to partition a set of n elements.
// Link :https://practice.geeksforgeeks.org/problems/bell-numbers/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
LL dp[1001][1001];
void init(){
	for(int i=0;i<1001;i++){
		dp[i][0]=0;
		dp[i][1]=1;
	}
	for(int i=2;i<1001;i++){
		for(int j=2;j<=i;j++)
			dp[i][j]=((dp[i-1][j]*j)%1000000007+dp[i-1][j-1])%1000000007;
	}
}
int main(){
	int t;
	cin>>t;
	int n;
	init();
	while(t--){
		cin>>n;
		LL sum=0;
		for(int i=0;i<=n;i++)
			sum=(sum+dp[n][i])%1000000007;
		cout<<sum<<endl;
	}
}