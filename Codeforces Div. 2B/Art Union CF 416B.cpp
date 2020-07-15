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
	ll n,m;
	cin>>m>>n;
	ll dp[m][n];
	FOR(i,0,m-1){
		FOR(j,0,n-1)
			cin>>dp[i][j];
	}
	ll arr[m],pl;
	mms(arr);
	FOR(j,0,n-1){
		pl=0;
		FOR(i,0,m-1)
			pl=arr[i]=max(arr[i],pl)+dp[i][j];
	}
	FOR(i,0,m-1)
		cout<<arr[i]<<' ';
}