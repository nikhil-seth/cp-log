//https://practice.geeksforgeeks.org/problems/minimum-cost-to-fill-given-weight-in-a-bag/0
// Minimum cost to fill given weight in a bag
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
	    int n,w;
	    cin>>n>>w;
	    int arr[n];
	    FORA(x,arr) cin>>x;
	    long dp[w+1];
	    FOR(i,1,w)
	        dp[i]=1e4;
        dp[0]=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==-1)
	            continue;
	        for(int j=i+1;j<=w;j++)
	            dp[j]=min(dp[j],dp[j-i-1]+arr[i]);
	    }
	    if(dp[w]==10000)
	        cout<<-1<<endl;
	    else
	        cout<<dp[w]<<endl;
	}
}