#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,flag=0;
	cin>>n>>m;
	int arr[n][m];
	for(auto i=0;i<n;i++){
		for(auto j=0;j<m;j++){
			cin>>arr[i][j];
			if((i==0 || i==(n-1) || j==0 || j==(m-1) )&& arr[i][j]==1)
				flag=1;
		}
	}
	if(flag)
		cout<<2;
	else
		cout<<4;
	return 0;
}