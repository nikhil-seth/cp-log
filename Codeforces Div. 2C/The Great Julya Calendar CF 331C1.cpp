#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;

int main(){
	fastio
	//fio
	int n;
	cin>>n;
	int dp[n+1];
	dp[0]=0;
	if(n==0)
		goto l;
	if(n<9)
		FOR(i,1,n)
			dp[i]=1;
	else
		FOR(i,1,9)
			dp[i]=1;
	for(int i=10;i<=n;i++){
		int res=INT_MAX,j=i;
		while(j!=0){
			if(j%10!=0)
				res=min(res,dp[i-j%10]);
			j=j/10;
		}
		dp[i]=res+1;
	}
	l:
	cout<<dp[n];
}