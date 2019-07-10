#include<bits/stdc++.h>
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// BFS in unweighted Graphs,undirected
using namespace std;
void BFS(vector<int> adj[],vector<bool> &visited,int i){
	queue<int> q;
	q.push(i);
	while(!q.empty()){
		i=q.front();
		q.pop();
		if(!visited[i]){
			cout<<i<<' ';
			visited[i]=1;
			for(auto u:adj[i])
				q.push(u);
		}
	}
}
void BFStrav(vector<int> adj[],int n){
	vector<bool> visited(n);
	fill(visited.begin(),visited.end(),0);
	for(int i=0;i<n;i++){
		if(!visited[i])
			BFS(adj,visited,i);
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
		adj[b-1].pb(a-1);
	}
	BFStrav(adj,n);
}

