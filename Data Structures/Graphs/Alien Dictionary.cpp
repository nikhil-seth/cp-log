// https://practice.geeksforgeeks.org/problems/alien-dictionary/1
// Alien Dictionary
void TopUtil(vector<int> adj[],vector<bool> &vis,int i,stack<int> &s){
    vis[i]=1;
    for(int u:adj[i]){
        if(!vis[u])
            TopUtil(adj,vis,u,s);
    }
    s.push(i);
}
string printOrder(string dict[], int N, int k){
    vector<int> adj[k];
    string x,y;
    for(int i=1;i<N;i++){
        int j=0;
        x=dict[i-1];
        y=dict[i];
        while(j<x.length() && j<y.length()){
            if(x[j]!=y[j]){
                adj[x[j]-'a'].push_back(y[j]-'a');
                break;
            }
            j++;
        }
    }
    vector<bool> vis(k,0);
    stack<int> s;
    for(int i=0;i<k;i++){
        if(!vis[i])
            TopUtil(adj,vis,i,s);
    }
    x.clear();
    while(!s.empty()){
        x.push_back(char(s.top()+'a'));
        s.pop();
    }
    return x;
}