#include<bits/stdc++.h>
using namespace std;

// Graph representations by Adjacency Lists Method using vectors.
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
    return 0; 
} 
