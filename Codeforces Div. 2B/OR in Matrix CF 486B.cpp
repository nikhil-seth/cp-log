#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	int f[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			f[i][j]=1;
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
			if(arr[i][j]==0){
				for(int k=0;k<n;k++){
					f[i][k]=0;
				}
				for(int k=0;k<m;k++){
					f[k][j]=0;
				}
			}
		}
	}

	int k[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			k[i][j]=0;
			for(int a=0;a<n;a++){
				k[i][j]=k[i][j] || f[i][a];
			}
			for(int a=0;a<m;a++){
				k[i][j]=k[i][j] || f[a][j];
			}
		}
		for(int j=0;j<n;j++){
			if(arr[i][j]!=k[i][j]){
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<f[i][j]<<' ';
		cout<<endl;
	}
	return 0;
}