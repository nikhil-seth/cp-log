// https://practice.geeksforgeeks.org/problems/hamiltonian-path/0
// Hamiltonian Path
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) FOR(auto &(x):(arr))
using namespace std;
bool hc(vector<int> adj[],vector<bool> &vis,int i,int c,int n){
    if(c==n)
        return 1;
    for(int u:adj[i]){
        if(!vis[u]){
            vis[u]=1;
            if(hc(adj,vis,u,c+1,n))
                return 1;
            vis[u]=0;
        }
    }
    return 0;
}
bool isham(vector<int> adj[],int n){
    vector<bool> vis(n,false);
    for(int i=0;i<n;i++){
        vis[i]=true;
        if(hc(adj,vis,i,1,n))
            return 1;
        fill(vis.begin(),vis.end(),0);
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,b,a;
        cin>>n>>m;
        vector<int> adj[n];
        while(m--){
            cin>>a>>b;
            adj[a-1].pb(b-1);
            adj[b-1].pb(a-1);
        }
        cout<<isham(adj,n)<<endl;
        
    }
}
