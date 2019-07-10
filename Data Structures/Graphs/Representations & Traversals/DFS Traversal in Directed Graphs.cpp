#include<bits/stdc++.h>
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// DFS in unweighted Graphs,undirected
using namespace std;
void DFS(vector<int> adj[],vector<bool> &visited,int i){
	cout<<i<<' ';
	visited[i]=1;
	for(int u=0;u<adj[i].size();u++){
		if(!visited[adj[i][u]])
			DFS(adj,visited,adj[i][u]);
	}
}
void DFStrav(vector<int> adj[],int n){
	vector<bool> visited(n);
	fill(visited.begin(),visited.end(),0);
	for(int i=0;i<n;i++){
		if(!visited[i])
			DFS(adj,visited,i);
	}
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
	}
	DFStrav(adj,n);
}

