// https://practice.geeksforgeeks.org/problems/negative-weight-cycle/0
// Negative weight cycle
// https://www.geeksforgeeks.org/bellman-ford-algorithm-dp-23/
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
	    int n,e;
	    cin>>n>>e;
	    int edge[e][3];
	    FOR(i,0,e-1){
	        FOR(j,0,2)
	            cin>>edge[i][j];
        }
        int dist[n];
        FOR(i,0,n-1)
            dist[i]=INT_MAX;
        dist[0]=0;
        FOR(i,1,n-1){
            FOR(j,0,e-1){
                if(dist[edge[j][0]]!=INT_MAX)
                    dist[edge[j][1]]=min(dist[edge[j][1]],dist[edge[j][0]]+edge[j][2]);
            }
        }
        int flag=0;
        FOR(j,0,e-1){
            if(dist[edge[j][0]]!=INT_MAX && dist[edge[j][1]]>dist[edge[j][0]]+edge[j][2]){
                flag=1;
                break;
            }
        }
        cout<<flag<<endl;
	}
}