// https://www.geeksforgeeks.org/find-maximum-length-snake-sequence/
#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int fn(int **dp,int n,int m,vector<vector<int>> &mat,int i,int j){
	if(dp[i][j]!=0)
		return dp[i][j];
	int x=0;
	if(i<n-1 && abs(mat[i+1][j]-mat[i][j])==1)
		x=max(x,fn(dp,n,m,mat,i+1,j));
	if(j<m-1 && abs(mat[i][j+1]-mat[i][j])==1)
		x=max(x,fn(dp,n,m,mat,i,j+1));
	dp[i][j]=x+1;
	return dp[i][j];
}
int main(){
	fastio
	fio
	int n,m,x;
	cin>>n>>m;
	vector<vector<int>> mat(n);
	FOR(i,0,n-1){
		FOR(j,0,m-1){
			cin>>x;
			mat[i].pb(x);
		}
	}
	int **dp=new int*[n];
	for(int i=0;i<n;i++){
		dp[i]=new int[m];
		for(int j=0;j<m;j++)
			dp[i][j]=0;
	}
	int mxm=0;
	FOR(i,0,n-1){
		FOR(j,0,m-1){
			if(dp[i][j]==0)
				fn(dp,n,m,mat,i,j);
			mxm=max(mxm,dp[i][j]);
		}
	}
	cout<<mxm<<endl;
}
