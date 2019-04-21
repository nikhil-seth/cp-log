// Gold Mine
// Link : https://practice.geeksforgeeks.org/problems/gold-mine-problem/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
int dp[20][20];
int arr[20][20];
int s(int i,int j,int n,int m){
	if(dp[i][j]!=-1)
		return dp[i][j];
	int a=-1,b=-1,c=-1;
	if(i-1>=0)
		a=s(i-1,j+1,n,m);
	if(i+1<n)
		b=s(i+1,j+1,n,m);
	c=s(i,j+1,n,m);
	dp[i][j]=max(a,max(b,c))+arr[i][j];
	return dp[i][j];
}
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
				dp[i][j]=-1;
			}
		}
		for(int i=0;i<n;i++)
			dp[i][m-1]=arr[i][m-1];
		int sum=0;
		for(int i=0;i<n;i++){
			sum=max(sum,s(i,0,n,m));
		}
		cout<<sum<<endl;
	}
}
