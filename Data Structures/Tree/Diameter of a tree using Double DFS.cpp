#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int dfstrav(vector<pair<int,int>> adj[],bool visited[],int i,int &dist){
    visited[i]=1;
    int d=0;
    int x,y=i;
    pair<int,int> p;
    for(int j=0;j<adj[i].size();j++){
        p=adj[i][j];
        if(!visited[p.first]){
            int temp=0;
            x=dfstrav(adj,visited,p.first,temp);
            if(d<p.second+temp){
                d=temp+p.second;
                y=x;
            }
        }   
    }
    dist=d;
    return y;
}
int dfs(vector<pair<int,int>> adj[],int n){
    bool visited[n];
    memset(visited,0,sizeof(bool)*n);
    int dist=0;
    int x=dfstrav(adj,visited,0,dist);
    dist=0;
    memset(visited,0,sizeof(bool)*n);
    x=dfstrav(adj,visited,x,dist);
    return dist;
}
int main(){
    fastio
    fio
    int t,n,u,v,w;
    cin>>t; 
    while(t--){
        cin>>n;
        vector<pair<int,int>> adj[n];
        FOR(i,0,n-2){
            cin>>u>>v>>w;
            adj[u-1].pb(make_pair(v-1,w));
            adj[v-1].pb(make_pair(u-1,w));
        }
        cout<<dfs(adj,n)<<endl;
    }
}

