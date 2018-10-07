// Link to problem : http://codeforces.com/problemset/problem/330/A
#include<iostream>
using namespace std;
int main(){
	int m,n,flagi,ctrj=0;
	cin>>n>>m;
	int x=0,y[10]={0,0,0,0,0,0,0,0,0,0};
	char t;
	for(int i=0;i<n;i++){
		flagi=0;
		for(int j=0;j<m;j++){
			cin>>t;	
			if( t=='S'){
				flagi=1;
				++y[j];
			}
		}
		if(flagi==0){
			++x;
		}
	}
	for(int i=0;i<m;i++){
		if(y[i]==0)
			ctrj++;
	}
	printf("%d",(x*m + ctrj*n)-(x*ctrj));
	return 0;
}