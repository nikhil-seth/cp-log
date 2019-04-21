// Friend Pairing Problem
// Link : https://practice.geeksforgeeks.org/problems/friends-pairing-problem/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
unsigned LL dp[101];
void init(){
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=100;i++){
		dp[i]=((i-1)*dp[i-2])%1000000007;
		dp[i]=(dp[i]+dp[i-1])%1000000007;
	}	
}
int main(){
	int n,t;
	cin>>t;
	init();
	while(t--){
		cin>>n;
		cout<<dp[n]<<endl;
	}
	return 0;
}