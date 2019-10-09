// https://practice.geeksforgeeks.org/problems/dice-throw/0
// Dice Throw DP
#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
	fastio
	int t;
	cin>>t;
	while(t--){
	    long m,n,x;
	    cin>>m>>n>>x;
	    long dp[x+1],temp[x+1];
	    memset(dp,0,sizeof(dp));
	    dp[0]=1;
	    long mval=0;
	    while(n--){
	        memset(temp,0,sizeof(temp));
	        FOR(i,1,m){
	            for(long j=mval+i;j<=x;j++)
	                temp[j]+=dp[j-i];
	        }
	        FOR(i,0,x){
	            dp[i]=temp[i];
	        }
	        mval++;
	    }
	    cout<<dp[x]<<endl;
	}
}