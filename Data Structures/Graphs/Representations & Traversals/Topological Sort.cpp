#include<bits/stdc++.h>
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// Topological Sort.
using namespace std;
void TopUtil(vector<int> adj[],vector<bool> &visited,stack<int> &s,int i){
	visited[i]=1;
	for(auto it=adj[i].begin();it!=adj[i].end();it++){
		if(!visited[(*it)])
			TopUtil(adj,visited,s,(*it));
	}
	s.push(i);
}
void TopSort(vector<int> adj[],int n){
	vector<bool> visited(n);
	stack<int> s;
	fill(visited.begin(),visited.end(),0);
	for(int i=0;i<n;i++){
		if(!visited[i])
			TopUtil(adj,visited,s,i);
	}
	while(!s.empty()){
		cout<<s.top()<<' ';
		s.pop();
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
	TopSort(adj,n);
}


