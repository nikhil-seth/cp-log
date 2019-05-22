#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
bool cnt(long arr[],int j,int n,LL sum){
	LL sum2=0;
	FOR(i,j,n-1)
		sum2+=arr[i];
	return sum2==sum;
}
int main(){
	fastio
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,m,q;
	cin>>n>>m;
	long arr[n];
	FORA(x,arr)
		cin>>x;
	int dp[n];
	set<int> s;
	dp[n-1]=1;
	s.insert(arr[n-1]);
	for(int i=n-2;i>=0;i--){
		dp[i]=dp[i+1];
		if(s.find(arr[i])==s.end()){
			dp[i]+=1;
			s.insert(arr[i]);
		}
	}
	while(m--){
		cin>>q;
		cout<<dp[q-1]<<endl;
	}
return 0;
}