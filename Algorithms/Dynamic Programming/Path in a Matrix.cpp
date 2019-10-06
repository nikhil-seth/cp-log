// Path in Matrix
// https://practice.geeksforgeeks.org/problems/path-in-matrix/0
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
	    int mat[n][n];
	    FOR(i,0,n-1){
	        FOR(j,0,n-1){
	            cin>>mat[i][j];
	        }
	    }
	    for(int i=n-2;i>=0;i--){
	        for(int j=0;j<n;j++){
	            int qt=mat[i+1][j];
	            if(j!=0)
	                qt=max(qt,mat[i+1][j-1]);
	            if(j!=n-1)
	                qt=max(qt,mat[i+1][j+1]);
	            mat[i][j]+=qt;
	        }
	    }
	    int ans=0;
	    FOR(i,0,n-1)
	        ans=max(ans,mat[0][i]);
	    cout<<ans<<endl;
    }
}