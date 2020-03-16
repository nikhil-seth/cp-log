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
	ll n,h,l,r;
	cin>>n>>h>>l>>r;
	ll arr[n];
	FORA(x,arr)
		cin>>x;
	ll dp[2][h],x,temp;
	mms(dp);
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<h;j++){
			dp[i%2][j]=0;
			x=(j+arr[i])%h;
			temp=dp[(i+1)%2][x];
			if(x>=l && x<=r)
				temp+=1;
			dp[i%2][j]=temp;
			x=(j+arr[i]-1)%h;
			temp=dp[(i+1)%2][x];
			if(x>=l && x<=r)
				temp+=1;
			dp[i%2][j]=max(dp[i%2][j],temp);
		}
	}
	cout<<dp[0][0]<<endl;
}