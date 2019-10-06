// Cutted Segments : https://practice.geeksforgeeks.org/problems/cutted-segments/0
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
	    int n,a[3];
	    cin>>n>>a[0]>>a[1]>>a[2];
	    int dp[n+1];
	    memset(dp,0,sizeof(dp));
	    dp[0]=1;
	    for(int i=1;i<=n;i++){
	        for(int j=0;j<3;j++){
	            if(i>=a[j]){
	                if(i-a[j]==0)
	                    dp[i]=max(dp[i],1);
	                else if(dp[i-a[j]]!=0)
	                    dp[i]=max(dp[i],dp[i-a[j]]+1);
	            }
	        }
	    }
	    cout<<dp[n]<<endl;
	}
}