#include<bits/stdc++.h>
using namespace std;

// BFS traversal on Adjacency List
void addEdge(vector<int> adj[],int u,int v){
	// For Unweighted Graphs.
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void addEdge(vector<pair<int,int>> adj[],int u,int v,int w){
	adj[u].push_back(make_pair(v,w));
	adj[v].push_back(make_pair(u,w));	
}

void printGraph(vector<int> adj[],int V){
	for(int i=0;i<V;i++){
		cout<<"\n Adjacency list for vertex V: "<<i<<"\n Head ";
		for(auto &x:adj[i]){
			cout<<"-> "<<x<<" ";
		}
	}
	cout<<endl;
}
void printGraph(vector<pair<int,int>> adj[],int V){
	for(int i=0;i<V;i++){
		cout<<"\n Adjacency list for vertex V: "<<i<<"\n Head ";
		for(auto &x:adj[i]){
			cout<<"-> ("<<x.first<<","<<x.second<<") ";
		}
	}
	cout<<endl;
}
void BFS(vector<int> adj[],int u,int visited[]){
	if(visited[u]==1)
		return;
	queue<int> Q;
	Q.push(u);
	while(!Q.empty()){
		u=Q.front();
		visited[u]=1;
		cout<<"\nVertex No : "<<u;	
		Q.pop();
		for(auto &x:adj[u]){
			if(!visited[x])
				Q.push(x);
		}
	}
}
void BFS(vector<pair<int,int>> adj[],int u,int visited[]){
	queue<int> Q;

	Q.push(u);
	while(!Q.empty()){
		u=Q.front();
		if(visited[u]==1)
			continue;
		visited[u]=1;
		cout<<"\nVertex No : "<<u;	
		Q.pop();
		for(auto &x:adj[u]){
			//cout<<x.first<<"\t"<<visited[x.first]<<endl;
			if(!visited[x.first])
				Q.push(x.first);
		}
	}
}
void BFSTraversal(vector<int> adj[],int V){
	int visited[V];
	for(auto &x:visited)
		x=0;
	for(int i=0;i<V;i++){
		if(!visited[i])
			BFS(adj,i,visited);
	}
}

void BFSTraversal(vector<pair<int,int>> adj[],int V){
	int visited[V];
	for(auto &x:visited)
		x=0;
	/*for(int i=0;i<V;i++){
		if(!visited[i])
			*/BFS(adj,0,visited);
	//}
}
int main(){
    int V = 5; 
    vector<pair<int,int>> adj[V]; 
    addEdge(adj, 0, 1, 1); 
    addEdge(adj, 0, 4, 1); 
    addEdge(adj, 1, 2, 1); 
    addEdge(adj, 1, 3, 1); 
    addEdge(adj, 1, 4, 2); 
    addEdge(adj, 2, 3, 3); 
    addEdge(adj, 3, 4, 4); 
    printGraph(adj, V); 
    BFSTraversal(adj,V);
    return 0; 
} 
