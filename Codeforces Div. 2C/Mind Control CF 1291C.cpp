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
long arr[3501];
long dp[3501][3501][2];
int n,m,k;
long fn2(int x,int y){
	//cout<<x<<' '<<y<<' '<<max(arr[x],arr[n-y-1])<<endl;
	return max(arr[x],arr[n-y-1]);
}
long fn(int x,int y){
	long ans=INT_MAX;
	FOR(i,0,m-k-1){
		ans=min(ans,fn2(x+i,y+(m-k-1-i)));
	}
	return ans;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		if(m<=k)
			k=m-1;
		long ans=0;
		FOR(i,0,n-1)
			cin>>arr[i];

		FOR(i,0,k){
			ans=max(ans,fn(i,k-i));
		}
		cout<<ans<<endl;
	}
}