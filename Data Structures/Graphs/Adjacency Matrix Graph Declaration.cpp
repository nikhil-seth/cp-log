#include<bits/stdc++.h>
using namespace std;
// Adjacency Graphs Method
struct Graph{
	int V;	// No of vertices in graph
	int E;	// No of edges in graph
	int **adj;	// 2D adjacency matrix.
};
Graph *adjMatrixGraph(){
	Graph *G;
	G=(Graph*)malloc(sizeof(G));
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
int main(){
	Graph *G;
	G=adjMatrixGraph();
	return 0;	
}