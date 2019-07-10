#include<bits/stdc++.h>
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// Shortest Path in Unweighted Graphs.
// Modified BFS
using namespace std;
void spath(vector<int> adj[],int n,int s){
	vector<bool> visited(n);
	vector<int> d(n);
	fill(d.begin(),d.end(),-1);
	fill(visited.begin(),visited.end(),0);
	vector<int> p(n);
	p[s]=-1;
	d[s]=0;
	visited[s]=1;
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int u:adj[v]){
			if(!visited[u]){
				visited[u]=1;
				q.push(u);
				d[u]=d[v]+1;
				p[u]=v;
			}
		}
	}
	for(int u:d)
		cout<<u<<' ';
	cout<<endl;
	for(int u:p)
		cout<<u<<' ';
	cout<<endl;
}
int main(){
	fio
	int n,e,a,b;
	cin>>n>>e;
	// No of nodes/vertices & edges/links.
	vector<int> adj[n];
	// 0-based indexing.
	while(e--){
		cin>>a>>b;
		adj[a-1].pb(b-1);
		adj[b-1].pb(a-1);
	}
	spath(adj,n,0);
}
