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
int dfs(vector<int> adj[],vector<bool> &vis,int v){
	vis[v]=1;
	int ctr=1;
	if(adj[v].size()==1)
		return 1;
	for(auto u:adj[v]){
		if(!vis[u]){
			ctr+=dfs(adj,vis,u);
		}
	}
	return ctr;
}
int main(){
	fastio
	int t,n,a,b,x,vt;
	cin>>t;
	while(t--){
		cin>>n>>x;
		vi adj[n+1];
		FOR(i,0,n-2){
			cin>>a>>b;
			adj[a].pb(b);
			adj[b].pb(a);
		}
		vector<bool> vis(n+1,0);
		vis[x]=1;
		int ctr=0;
		if(adj[x].size()==1 ||adj[x].size()==0)
			ctr=0;
		else{
			for(auto v:adj[x]){
				if(!vis[v])
					ctr+=dfs(adj,vis,v);
			}
			ctr-=1;
		}
		if(ctr%2==0)
			cout<<"Ayush\n";
		else
			cout<<"Ashish\n";
	}
}