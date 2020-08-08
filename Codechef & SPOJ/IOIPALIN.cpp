#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	ll t;
	t=1;
	string s;
	while(t--){
		ll n;
		cin>>n;
		cin>>s;
		int dp[n][n];
		mms(dp);
		FOR(gap,1,n-1){
			for(int i=0,j=gap;j<n;i+=1,j+=1){
				if(s[i]==s[j])
					dp[i][j]=dp[i+1][j-1];
				else
					dp[i][j]=min(dp[i+1][j],dp[i][j-1])+1;
			}
		}
		cout<<dp[0][n-1]<<endl;
	}
}