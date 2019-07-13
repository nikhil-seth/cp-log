// Snakes & Ladders Problem
// https://practice.geeksforgeeks.org/problems/snake-and-ladder-problem/0
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) FOR(auto &(x):(arr))
using namespace std;
int minth(vector<int> &moves,int n){
    vector<bool> vis(n,0);
    queue<int> q;
    q.push(1);
    q.push(-1);
    int ctr=0;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        if(v==-1){
            if(!q.empty()){
                q.push(-1);
                ctr++;
            }
            continue;
        }
        else if(v==n-1)
            return ctr;
        else if(vis[v])
            continue;
        for(int i=v+1;i<=v+6;i++){
            vis[v]=1;
            if(!vis[i]){
                if(moves[i]==-1)
                    q.push(i);
                else
                    q.push(moves[i]);
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=31,e,x,y;
        cin>>e;
        vector<int> moves(31,-1);
        while(e--){
            cin>>x>>y;
            moves[x]=y;
        }
        cout<<minth(moves,n)<<endl;
    }
}