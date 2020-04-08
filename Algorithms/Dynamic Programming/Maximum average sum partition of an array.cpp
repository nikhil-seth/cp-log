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
	float arr[n];
	FORA(x,arr)
		cin>>x;
	float dp[k+1][n+1];
	float x=0;
	mms(dp);
	for(int i=1;i<=n;i++){
		x+=arr[i-1];
		dp[1][i]=(x/i);
	//	cout<<dp[1][i]<<' ';
	}
	//cout<<endl;
	for(int i=2;i<=k;i++){
		for(int j=i;j<=n;j++){
			float s=0,x;
			for(int k=j;k>=i;k--){
				s+=arr[k-1];
				x=s/(j-k+1)+dp[i-1][k-1];
				if(dp[i][j]<x)
					dp[i][j]=x;
			}
			//cout<<dp[i][j]<<' ';
		}
		//cout<<endl;
	}
	cout<<dp[k][n]<<endl;
}
