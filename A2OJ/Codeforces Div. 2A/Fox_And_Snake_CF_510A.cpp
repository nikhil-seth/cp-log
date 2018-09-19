#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main(){
	int n,m,t;
	cin>>n>>m;
	t=m-1;
	char x[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i%2==0)
				x[i][j]='#';
			if(i%2==1)
				x[i][j]='.';
		}
		if(i%2==1){
			x[i][t]='#';
			if(t)
				t=0;
			else
				t=m-1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<x[i][j];
		}
		cout<<endl;
	}
	return 0;
}

