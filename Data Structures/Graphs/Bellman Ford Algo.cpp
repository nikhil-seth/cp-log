// Negative weight cycle
// https://practice.geeksforgeeks.org/problems/negative-weight-cycle/0
// Bellman Ford.
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) FOR(auto &(x):(arr))
using namespace std;
struct Edge{
    int u,v,w;
};
bool bf(vector<Edge> &v,int n,int e){
    int j;
    vector<int> dist(n,INT_MAX);
    dist[0]=0;
    for(int i=0;i<n;i++){
        j=-1;
        for(int k=0;k<e;k++){
            if(dist[v[k].u]!=INT_MAX && dist[v[k].u]+v[k].w<dist[v[k].v]){
                dist[v[k].v]=dist[v[k].u]+v[k].w;
                j=0;
            }
        }
    }
    if(j==-1)
        return 0;
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,e;
        cin>>n>>e;
        vector<Edge> v(e);
        for(int i=0;i<e;i++)
            cin>>v[i].u>>v[i].v>>v[i].w;
        cout<<bf(v,n,e)<<endl;
    }
}