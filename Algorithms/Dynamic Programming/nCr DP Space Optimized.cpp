/* Solving nCr (Combination) Problem using DP &  Space Optimization.
https://www.youtube.com/watch?v=3D_Oj16EtD8
https://www.youtube.com/watch?v=_iAIto06bWk
*/
#include<bits/stdc++.h>
using namespace std;
int nCr(int n,int r){
	int C[r+1];
	memset(C, 0, sizeof(C)); 

	C[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=min(i,r);j>0;j--){
			C[j]=C[j]+C[j-1];
		}
	}
	return C[r];
}

int main(){
	int n,r;
	cin>>n>>r;
	cout<<nCr(n,r);
	return 0;
}