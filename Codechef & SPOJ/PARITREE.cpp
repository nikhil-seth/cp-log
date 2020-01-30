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
using namespace std;
int bfs(int n,vector<pair<int,int>> adj[]){
	vector<bool> vis(n,0);
	vector<int> color(n,2);
	queue<int> q;
	int ctr=0;
	FOR(i,0,n-1){
		if(vis[i]==0){
			ctr++;
			color[i]=1;
			q.push(i);
			while(!q.empty()){
				int t=q.front();
				q.pop();
				if(vis[t]==1)
					continue;
				vis[t]=1;
				FORA(x,adj[t]){
					// x.first-> node, x.second-> color
					if(x.second==0){
						if(color[x.first]==2)
							color[x.first]=color[t];
						else if(color[x.first]!=color[t])
							return -1;
					}
					else{
						if(color[x.first]==2)
							color[x.first]=1-color[t];
						else if(color[x.first]==color[t])
							return -1;
					}
					q.push(x.first);
				}
			}
		}
	}
	return ctr;
}
ll fn(int a){
	if(a==0)
		return 1;
	if(a==1)
		return 2;
	if(a%2==0){
		ll x=fn(a/2);
		x*=x;
		x%=1000000007;
		return x;
	}
	ll x=fn(a-1);
	x*=2;
	x%=1000000007;
	return x;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll t,n,q;
	int x,a,b,c;
	cin>>t;
	while(t--){
		cin>>n>>q;
		FOR(i,0,n-2)
			cin>>x>>x;
		vector<pair<int,int>> adj[n];
		FOR(i,0,q-1){
			cin>>a>>b>>c;
			adj[a-1].pb(mp(b-1,c));
			adj[b-1].pb(mp(a-1,c));
		}
		a=bfs(n,adj);
		if(a==-1)
			cout<<0;
		else
			cout<<fn(a-1
				);
		cout<<endl;
	}
}