#include<bits/stdc++.h>
using namespace std;

// Shortest Path in Unweighted Graphs ( BFS ALGO O(V+E))

void addEdge(vector<int> adj[],int u,int v){
	// For weighted Graphs.
	adj[u].push_back(v);
	adj[v].push_back(u);
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
void ShortDist(vector<int> adj[],int V,int s){
	pair<int,int> distpath[V];
	for(auto &x:distpath)
		x.first=-1;
	distpath[s].first=0;

	queue<int> Q;
	Q.push(s);
	while(!Q.empty()){
		s=Q.front();
		Q.pop();
		for(auto &p:adj[s]){
			if(distpath[p].first==-1){
				//cout<<p<<endl;
				distpath[p].first=distpath[s].first+1;
				distpath[p].second=s;
				Q.push(p);
			}
		}
	}
	for(int i=0;i<V;i++){
    	cout<<i<<"\t"<<distpath[i].first<<endl;
    }
}
int main(){
	int V=5;
    vector<int> adj[V]; 

	addEdge(adj,0,1);
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    //printGraph(adj, V);
    cout<<"\nEnter Source Edge";
    int x;
    cin>>x;
    ShortDist(adj,V,x);
    return 0; 
}