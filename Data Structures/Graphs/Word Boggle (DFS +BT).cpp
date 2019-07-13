// https://practice.geeksforgeeks.org/problems/word-boggle/0
// Word Boggle
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) for(auto &(x):(arr))
using namespace std;

int t,x,n,m;
//char mat[10][10];
//int vis[10][10];
int dx[] = {1,1,0,-1,-1,-1,0,1};
int dy[] = {0,1,1,1,0,-1,-1,-1};

bool valid(int x,int y) {
    return x>=0 && x<n && y>=0 && y<m;
}
bool check(string s,int id,int i,int j,bool **vis,char **mat) {
    if(id>=s.size())
        return 1;
    for(int k=0;k<8;k++) {
        int u = i+dx[k];
        int v = j+dy[k];
        if(valid(u,v) && vis[u][v]==0 && mat[u][v]==s[id]){
            vis[u][v] =1;
            if(check(s,id+1,u,v,vis,mat))
                return 1;
            vis[u][v] = 0;  // backtracking 
        }
    }
    return 0;
}

int main()
{	
	cin>>t;
	while(t--) {
	    cin>>x;
	    string s;
	    vector<string> v,ans;
        for(int i=0;i<x;i++){
            cin>>s;
	        v.push_back(s);
	    }
        cin>>n>>m;
	    char **mat=new char*[n];
	    bool **vis=new bool*[n];
	    for(int i=0;i<n;i++){
	        mat[i]=new char[m];
	        vis[i]=new bool[m];
	        for(int j=0;j<m;j++)
	            cin>>mat[i][j];
	    }
	    set<string> st;
	    bool fg=0,l=0;
	    for(int i=0;i<x;i++) {
	        s=v[i];
	        l=0;
	        for(int j=0;j<n;j++){
	            for(int k=0;k<m;k++)
	                vis[j][k]=0;
	        }
	        for(int j=0;j<n;j++){
	            for(int k=0;k<m;k++){
	                if(mat[j][k]==s[0]){
	                    vis[j][k]=1;
	                    l = check(s,1,j,k,vis,mat);    // dfs call
	                    if(l){
	                        fg=1;
	                        break;
	                    }
	                }
	            }
	            if(l) break;
	        }
	        if(l) st.insert(s);
	    }
	    if(!fg) cout<<-1<<endl;
	    else {
	        for(string y:st)
	            cout<<y<<" ";
	        cout<<endl;
	    }
	}
	return 0;
}