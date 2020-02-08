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
int dp[1000001];
bool fn(vector<bool> &vis,ll x){
	ll q=x;
	while(q>0){
		if(q%10==0)
			return 0;
		q/=10;
	}
	q=0;
	int i=0;
	while(x>0){
		q=pow(10,i)*(x%10)+q;
		//cout<<q<<' ';
		i++;
		x/=10;
		if(!vis[q])
			return 0;
	}
	//cout<<endl;
	return 1;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	vector<bool> vis(1000001,1);
	ll ctr=0;
	dp[2]=0;
	vis[0]=vis[1]=0;
	for(ll i=2;i*i<=1000000;i++){
		if(vis[i]){
			for(ll j=i*i;j<1000001;j+=i)
				vis[j]=0;
		}
	}
	for(ll i=2;i<=1000000;i++){
		dp[i]=dp[i-1];
		if(vis[i]){
			if(fn(vis,i))
				dp[i]+=1;
		}
	}
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<dp[n]<<endl;
	}
}