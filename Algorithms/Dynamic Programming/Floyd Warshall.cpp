// https://practice.geeksforgeeks.org/problems/implementing-floyd-warshall/0
// Floyd Warshall
#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
	fastio
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long **adj=new long*[n];
	    FOR(i,0,n-1){
	        adj[i]=new long[n];
	        FOR(j,0,n-1){
	            cin>>adj[i][j];
	            if(adj[i][j]==10000000)
	                adj[i][j]=INT_MAX;
	        }
	    }
	    FOR(k,0,n-1){
	        FOR(i,0,n-1){
	            FOR(j,0,n-1){
	                if(adj[i][k]+adj[k][j]<adj[i][j])
	                    adj[i][j]=adj[i][k]+adj[k][j];
	            }
	        }
	    }
	    FOR(i,0,n-1){
	        FOR(j,0,n-1){
	            if(adj[i][j]==INT_MAX)
	                cout<<"INF ";
	            else
	                cout<<adj[i][j]<<' ';
	        }
	        cout<<endl;
	    }
	}
}