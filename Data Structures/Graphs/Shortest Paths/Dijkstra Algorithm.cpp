#include<bits/stdc++.h>
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// Shortest Path in Weighted Graphs(+ve weights).
// Dijkstra's Algorithm
using namespace std;
void Dijkstra(vector<pair<int,int>> adj[],int n,int s,vector<int> &d,vector<int> &p){
	d.assign(n,INT_MAX);
	p.assign(n,-1);
	vector<bool> visited(n,false);
	d[s]=0;
	for(int i=0;i<n;i++){
		int v=-1;
		for(int j=0;j<n;j++){
			if(!visited[j] && (v==-1 || d[j]<d[v]))
				v=j;
		}
		if(d[v]==INT_MAX)
			break;
		visited[v]=1;
		for(auto u:adj[v]){
			int to=u.first;
			int len=u.second;
			if(d[v]+len<d[to]){
				d[to]=d[v]+len;
				p[to]=v;
			}
		}
	}
}
int main(){
	fio
	int n,e,a,b,c;
	cin>>n>>e;
	// No of nodes/vertices & edges/links.
	vector<pair<int,int>> adj[n];
	// 0-based indexing.
	while(e--){
		cin>>a>>b>>c;
		adj[a-1].pb(make_pair(b-1,c));
		//adj[b-1].pb(make_pair(a-1,c));
	}
	vector<int> d(n),p(n);
	Dijkstra(adj,n,0,d,p);
	for(auto &x:d)
		cout<<x<<' ';
	cout<<endl;
	for(auto &x:p)
		cout<<x<<' ';
	cout<<endl;
}
