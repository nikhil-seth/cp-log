#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair; 

// Djikstra's - Shortest Path in non-negative Weighted Graph.
void addEdge(vector<iPair> adj[],int u,int v,int w){
	adj[u].push_back(make_pair(v,w));
	adj[v].push_back(make_pair(u,w));

}
void printGraph(vector<iPair> adj[],int V){
	for(int i=0;i<V;i++){
		cout<<"\n Adjacency list for vertex V: "<<i<<"\n Head ";
		for(auto &x:adj[i]){
			cout<<"-> ("<<x.first<<","<<x.second<<") ";
		}
	}
	cout<<endl;
}
void Dijkstra(vector<iPair> adj[],int V,int u){
	priority_queue <iPair,vector<iPair>,greater<iPair>> pq;		// Minimum Priority Queue.
    vector<int> dist(V,INT_MAX);
    pq.push(make_pair(0,u));	// Inserting pair of 0,u as 0 is dist of u from u.
    dist[u]=0;
    while(!pq.empty()){
    	int x=pq.top().second;
    	pq.pop();
    	for(auto &t:adj[x]){
    		int y=t.first;
    		int wt=t.second;
    		if(dist[y]>(dist[x]+wt)){
    			dist[y]=dist[x]+wt;
    			pq.push(make_pair(dist[y],y));

    		}
    	}
    }
	printf("Vertex Distance from Source\n"); 
    for (int i = 0; i < V; ++i) 
	    printf("%d \t\t %d\n", i, dist[i]); 
}
int main(){
 int V = 9; 
    vector<iPair> adj[V]; 
  
    // making above shown graph 
    addEdge(adj, 0, 1, 4); 
    addEdge(adj, 0, 7, 8); 
    addEdge(adj, 1, 2, 8); 
    addEdge(adj, 1, 7, 11); 
    addEdge(adj, 2, 3, 7); 
    addEdge(adj, 2, 8, 2); 
    addEdge(adj, 2, 5, 4); 
    addEdge(adj, 3, 4, 9); 
    addEdge(adj, 3, 5, 14); 
    addEdge(adj, 4, 5, 10); 
    addEdge(adj, 5, 6, 2); 
    addEdge(adj, 6, 7, 1); 
    addEdge(adj, 6, 8, 6); 
    addEdge(adj, 7, 8, 7); 
    Dijkstra(adj, V, 0); 
    return 0; 
} 
