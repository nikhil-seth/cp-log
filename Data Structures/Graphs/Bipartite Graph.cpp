// https://practice.geeksforgeeks.org/problems/bipartite-graph/1
// Bipartite Graph
bool DFS(int G[][MAX],vector<int> &color,int V,int i,int c){
    color[i]=c;
    bool res=1;
    for(int j=0;j<V && res!=0;j++){
        if(G[i][j]==1){
            if(color[j]==-1)
               res=res && DFS(G,color,V,j,1-c);
            else if(color[j]==c)
                return 0;
        }
    }
    return res;
}
bool isBipartite(int G[][MAX],int V){
    vector<int> color(V,-1);
    bool r=1;
    for(int i=0;i<V && r!=0;i++){
        if(color[i]==-1)
            r=r && DFS(G,color,V,i,1);
    }
    return r;
}