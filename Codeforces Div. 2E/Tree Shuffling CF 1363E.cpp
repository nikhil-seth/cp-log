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
ll ans=0;
vector<vector<ll>> adj,data;
vector<int> dfs(int u,vector<bool> &vis,ll x){
	vis[u]=1;
	data[u][0]=min(x,data[u][0]);
	vector<int> vx(2,0),tx(2,0);
	if(data[u][1]!=data[u][2])
		tx[data[u][1]]+=1;
	for(auto v:adj[u]){
		if(!vis[v]){
			vx=dfs(v,vis,data[u][0]);
			tx[0]+=vx[0];
			tx[1]+=vx[1];
		}
	}
	x=min(tx[0],tx[1]);
	ans+=data[u][0]*x;
	tx[0]-=x;
	tx[1]-=x;
	return tx;
}
int main(){
	fastio
	int n;
	cin>>n;
	adj=vector<vector<ll>>(n+1);
	vector<ll> x(3);
	data=vector<vector<ll>>(n+1);
	int pc[2],cc[2];
	mms(pc); mms(cc);
	FOR(i,1,n){
		cin>>x[0]>>x[1]>>x[2];
		data[i]=x;
		pc[x[1]]+=1;
		cc[x[2]]+=1;
	}
	FOR(i,1,n-1){
		cin>>x[0]>>x[1];
		adj[x[0]].pb(x[1]);
		adj[x[1]].pb(x[0]);
	}
	if(pc[0]!=cc[0] || pc[1]!=cc[1]){
		cout<<-1;
		return 0;
	}
	vector<bool> vis(n+1,0);
	ans=0;
	dfs(1,vis,INT_MAX);
	cout<<ans*2<<endl;
}
