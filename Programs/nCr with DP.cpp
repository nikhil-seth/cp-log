// Solving nCr (Combination) Problem using DP
#include<bits/stdc++.h>
using namespace std;
int nCr(int n,int r){
	int C[n+1][r+1];
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=min(i,r);j++){
			if(j==0 || j==i)
				C[i][j]=1;
			else
				C[i][j]=C[i-1][j-1]+C[i-1][j];
		}
	}
	return C[n][r];
}

int main(){
	int n,r;
	cin>>n>>r;
	cout<<nCr(n,r);
	return 0;
}