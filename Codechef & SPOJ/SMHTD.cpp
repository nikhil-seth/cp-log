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
	int n;
	cin>>n;
	int arr[n];
	int ctr=0;
	FOR(i,0,n-1){
		cin>>arr[i];
		arr[i]-=(i+1);
	}
	vector<int> dp;
	FOR(i,ctr,n-1){
		if(arr[i]>=0){
			int x=upper_bound(dp.begin(),dp.end(),arr[i])-dp.begin();
			if(x!=dp.size())
				dp[x]=arr[i];
			else
				dp.pb(arr[i]);
		}
	}
	cout<<n-dp.size();
}