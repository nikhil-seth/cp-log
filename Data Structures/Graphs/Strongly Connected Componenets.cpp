// Count/Print Strongly Connected Componenets
// https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1
void DFS(vector<int> adj[],int s,vector<bool> &vis){
    vis[s]=1;
    for(int u:adj[s]){
        if(!vis[u])
            DFS(adj,u,vis);
    }
}
void tp(vector<int> adj[],vector<int> transpose[],int V){
    for(int i=0;i<V;i++){
        for(int u:adj[i])
            transpose[u].push_back(i);
    }
}
void fills(vector<int> adj[],vector<bool> &vis,int s,stack<int> &st){
    vis[s]=1;
    for(int u:adj[s]){
        if(!vis[u])
            fills(adj,vis,u,st);
    }
    st.push(s);
}
int kosaraju(int V, vector<int> adj[]){
    vector<bool> vis(V,0);
    stack<int> s;
    for(int i=0;i<V;i++){
        if(!vis[i])
            fills(adj,vis,i,s);
    }
    vector<int> tpose[V];
    tp(adj,tpose,V);
    fill(vis.begin(),vis.end(),0);
    int ctr=0;
    while(!s.empty()){
        int v=s.top();
        s.pop();
        if(!vis[v]){
            ctr++;
            DFS(tpose,v,vis);
        }
    }
    return ctr;
}