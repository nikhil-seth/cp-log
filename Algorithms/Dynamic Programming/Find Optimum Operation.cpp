// Find Optimum operation
// Link : https://practice.geeksforgeeks.org/problems/find-optimum-operation/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
int dp[10001];
void init(){
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<10001;i++){
		if(i%2!=0)
			dp[i]=dp[i-1]+1;
		else
			dp[i]=min(dp[i-1],dp[i/2])+1;
	}
}
int main(){
	int t,n;
	init();
	cin>>t;
	while(t--){
		cin>>n;
		cout<<dp[n]<<endl;
	}
	return 0;
}
