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
	ll n;
	cin>>n;
	int arr[n];
	FORA(x,arr)	cin>>x;
	int dp[n][2];
	FOR(j,0,n-1){
		for(int i=n-1;i>=0;i--){
			if(i>j)
				dp[i][j%2]=0;
			else if(i==j)
				dp[i][j%2]=arr[i]*(n);
			else if(i==n-1)
				dp[i][j]=dp[i][(j+1)%2]+arr[j]*(n-j-1);
			else
				dp[i][j%2]=max(dp[i][(j+1)%2]+arr[j]*(n-j+i),dp[i+1][j%2]+arr[i]*(n-j+i));
		}
	}
cout<<dp[0][(n-1)%2]<<endl;
}