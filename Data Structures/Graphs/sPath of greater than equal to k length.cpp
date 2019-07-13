// https://practice.geeksforgeeks.org/problems/path-of-greater-than-equal-to-k-length/0
//Path of greater than equal to k length
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) FOR(auto &(x):(arr))
using namespace std;
bool dfs(vector<pair<int,int>> adj[],int i,int k,vector<bool> &vis){
    if(k<=0)
        return 1;
    vis[i]=1;
    for(auto u:adj[i]){
        if(!vis[u.first])
            return dfs(adj,u.first,k-u.second,vis);
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int v,e,k,a,b,w;
        cin>>v>>e>>k;
        vector<pair<int,int>> adj[v];
        for(int i=0;i<e;i++){
            cin>>a>>b>>w;
            adj[a].pb(make_pair(b,w));
            adj[b].pb(make_pair(a,w));
        }
        vector<bool> vis(v,0);
        int flag=0;
        for(int i=0;i<adj[0].size();i++){
            fill(vis.begin(),vis.end(),0);
            vis[0]=true;
            if(dfs(adj,adj[0][i].first,k-adj[0][i].second,vis)){
                flag=1;
                break;
            }
        }
        cout<<flag<<endl;
    }
}