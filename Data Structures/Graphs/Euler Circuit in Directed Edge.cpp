// Euler Circuit.
// https://practice.geeksforgeeks.org/problems/euler-circuit-in-a-directed-graph/1
Graph Graph::getTranspose(){
    Graph t(V);
    for(int i=0;i<V;i++){
        list<int>::iterator it;
        for(it=adj[i].begin();it!=adj[i].end();it++){
            t.adj[(*it)].push_back(i);
            (t.in[i])++;
        }
    }
    return t;
}
bool Graph::isSC(){
    // We'll call DFS on first non-visited vertex.
    bool vis[V];
    memset(vis,0,sizeof(vis));
    int i;
    for(i=0;i<V;i++){
        if(adj[i].size()>0)
            break;
    }
    DFSUtil(i,vis);
    for(int j=0;j<V;j++){
        if(!vis[j] && adj[j].size()>0)
            return 0;
    }
    Graph tp=getTranspose();
    memset(vis,0,sizeof(vis));
    tp.DFSUtil(i,vis);
    for(int j=0;j<V;j++){
        if(!vis[j] && adj[j].size()>0)
            return 0;
    }
    return true;
}
bool Graph::isEulerianCycle(){
    if(isSC()==0)
        return 0;
    for(int i=0;i<V;i++){
        if(adj[i].size()!=in[i])
            return 0;
    }
    return 1;
}