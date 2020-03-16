#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n,k;
	cin>>n>>k;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	int dp[2][k];
	mms(dp);
	FOR(i,1,n){
		FOR(j,1,k-1){
			dp[i%2][j]=0;
			if(arr[i-1]==j)
				dp[i%2][j]=1;
			if(j%arr[i-1]==0)
				dp[i%2][j]+=dp[(i+1)%2][j/arr[i-1]];
			dp[i%2][j]+=dp[(i+1)%2][j];
		}
	}
	ll ans=0;
	FOR(i,0,k-1)
		ans+=dp[n%2][i];
	cout<<ans;
}
