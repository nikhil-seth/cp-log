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
	cin>>n>>m;
	ll arr[n];
	bool f=0;
	FORA(x,arr){
		cin>>x;
		x%=m;
		if(!x) f=1;
	}
	if(n>m || f){
		cout<<"YES";
		return 0;
	}
	bool dp[m],temp[m];
	mms(dp);
	for(int i=0;i<n;i+=1){
		if(dp[0])
			break;
		mms(temp);
		for(int j=0;j<m;j+=1){
			if(dp[j])
				temp[(j+arr[i])%m]=1;
		}
		FOR(j,0,m-1)
			dp[j]|=temp[j];
		dp[arr[i]]=1;
	}
	if(dp[0])
		cout<<"YES";
	else
		cout<<"NO";
}
