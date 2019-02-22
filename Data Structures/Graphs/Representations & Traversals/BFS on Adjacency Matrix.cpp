#include<bits/stdc++.h>
using namespace std;
// Adjacency Graphs Method by Lists
struct Graph{
	int V;	// No of vertices in graph
	int E;	// No of edges in graph
	int **adj;	// 2D adjacency matrix.
};
Graph* AdjMatrixGraph(){
	Graph *G;
	G=(Graph*)malloc(sizeof(Graph));
	if(!G){
		cout<<"Memory Error";
		return nullptr;
	}
	cout<<"Enter No of Vertices";
	cin>>G->V;
	cout<<"Enter No of Edges";
	cin>>G->E;
    G->adj = (int **)malloc(sizeof(int *)*G->V); 
    for (int i=0; i<G->V; i++) 
         G->adj[i] = (int *)malloc(G->V * sizeof(int)); 
	for(int i=0;i<G->V;i++){
		for(int j=0;j<G->V;j++){
			G->adj[i][j]=0;
		}
	}
	for(int i=0;i<G->E;i++){
		int u,v;
		cout<<"Reading Edge"<<i+1<<endl;
		cin>>u>>v;
		G->adj[u][v]=1;
		G->adj[v][u]=1;	// Comment Out if a directed graph.
	}
	return G;
}
void BFS(Graph *G,int u,int visited[]){
	queue<int> Q;
	int v;
	Q.push(u);
	while(!Q.empty()){
		u=Q.front();
		Q.pop();

		if(visited[u]==1)
			continue;
		cout<<"\nVertex No : "<<u;
		visited[u]=1;
		for(int i=0;i<G->V;i++){
			if(!visited[i] && G->adj[u][i]==1)
				Q.push(i);
		}
	}
}
void BFSTraversal(Graph *G){
	int visited[G->V];
	for(auto &x:visited)
		x=0;
	// Below for loop is used when graph has more than one component.
	for(int i=0;i<G->V;i++){
		if(!visited[i])
			BFS(G,i,visited);
	}
}
int main(){
	Graph *G;
	G=AdjMatrixGraph();
	BFSTraversal(G);
	return 0;	
}