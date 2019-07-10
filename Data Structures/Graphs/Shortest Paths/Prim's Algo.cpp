#include<bits/stdc++.h>
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// Prim's Algorithm to find MST.
using namespace std;
int prim(int **adj,int n){
	vector<bool> visited(n,false);
	vector<pair<int,int>> min_e(n);
	fill(min_e.begin(),min_e.end(),make_pair(INT_MAX,-1));
	int tw=0;
	min_e[0].first=0;
	for(int i=0;i<n;i++){
		int v=-1;
		for(int j=0;j<n;j++){
			if(!visited[j] && (v==-1 || min_e[j].first<min_e[v].first))
				v=j;
		}
		if(v==-1)
			return -1;
		visited[v]=1;
		tw+=min_e[v].first;
		for(int to=0;to<n;to++){
			if(adj[v][to]<min_e[to].first){
				min_e[to].first=adj[v][to];
				min_e[to].second=v;					
			}
		}
	}
	return tw;
}
int main(){
	fio
	int n,e,a,b,c;
	cin>>n>>e;
	// No of nodes/vertices & edges/links.
	int **adj;
	adj=new int*[n];
	for(int i=0;i<n;i++){
		adj[i]=new int[n];
		for(int j=0;j<n;j++)
			adj[i][j]=INT_MAX;
	}
	while(e--){
		cin>>a>>b>>c;
		adj[a-1][b-1]=adj[b-1][a-1]=c;
	}
	cout<<prim(adj,n);
}