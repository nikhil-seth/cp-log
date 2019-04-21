// Program to floor tiles
// Link : https://practice.geeksforgeeks.org/problems/ways-to-tile-a-floor/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
LL dp[71];
void init(){
	dp[0]=1;
	dp[1]=2;
	for(int i=2;i<71;i++)
		dp[i]=dp[i-1]+dp[i-2];
}
int main(){
	int t,n;
	cin>>t;
	init();
	while(t--){
		cin>>n;
		cout<<dp[n-1]<<endl;
	}
}