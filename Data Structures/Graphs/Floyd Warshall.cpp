#include<bits/stdc++.h>
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// Floyd Warshall Algorithm for All Pair Shortest Paths.
// TC: O(n^3).
/* Key Idea DP seh ata hai,
That for kth vertex, we work on every edge possible & say ki iske shortest path
mei agar k ho toh dist kam hoga ya nahi
dist[i][j]=min(dist[i][j],dist[i][k] + dist[k][j])
Used to: Detect -ve edge cycle (At end, dist of node to itself is -ve).
*/
using namespace std;
void FW(int **adj,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(adj[i][k]<INT_MAX && adj[k][j]<INT_MAX)
					adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
			}
		}
	}
}
// Requires modif. for Directed Graphs.
int main(){
	fio
	int n,e,a,b,w;
	cin>>n>>e;
	int **adj;
	adj=new int*[n];
	for(int i=0;i<n;i++){
		adj[i]=new int[n];
		for(int j=0;j<n;j++){
			if(i==j)
				adj[i][j]=0;
			else
				adj[i][j]=INT_MAX;
		}
	}
	while(e--){
		cin>>a>>b>>w;
		adj[a-1][b-1]=w;
		adj[b-1][a-1]=w;
	}
	FW(adj,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<adj[i][j]<<' ';
		}
		cout<<endl;
	}
}