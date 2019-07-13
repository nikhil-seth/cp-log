//https://practice.geeksforgeeks.org/problems/minimum-cost-path/0
// Minimum Cost Path
#include<bits/stdc++.h>
using namespace std;
struct cell{
    int x,y,dist;
    cell(int x,int y,int dist):x(x),y(y),dist(dist){}
};
bool operator<(const cell& a,const cell& b){
    if(a.dist==b.dist){
        if(a.x!=b.x)
            return (a.x<b.x);
        else
            return (a.y<b.y);
    }
    return (a.dist<b.dist);
}
bool isins(int i,int j,int n){
    return (i>=0 && i<n && j>=0 && j<n);
}
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int st(int **adj,int **dis,int n){
    set<cell> st;
    st.insert(cell(0,0,0));
    dis[0][0]=adj[0][0];
    while(!st.empty()){
        cell k=(*st.begin());
        st.erase(st.begin());
        for(int i=0;i<4;i++){
            int x=k.x+dx[i];
            int y=k.y+dy[i];
            if(!isins(x,y,n))
                continue;
            if(dis[x][y]>dis[k.x][k.y]+adj[x][y]){
                if(dis[x][y]!=INT_MAX)
                    st.erase(st.find(cell(x,y,dis[x][y])));
                dis[x][y]=dis[k.x][k.y]+adj[x][y];
                st.insert(cell(x,y,dis[x][y]));
            }
        }
    }
    return dis[n-1][n-1];
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int **adj=new int*[n],**d=new int*[n];
        for(int i=0;i<n;i++){
            adj[i]=new int[n];
            d[i]=new int[n];
            for(int j=0;j<n;j++){
                cin>>adj[i][j];
                d[i][j]=INT_MAX;
            }
        }
        cout<<st(adj,d,n)<<endl;
    }
}