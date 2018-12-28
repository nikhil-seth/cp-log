#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(long i=(a);i<(b);i++)
using namespace std;
int main(){
	long s[3]={0,0,0};
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
			s[i]+=arr[i][j];
		}
	}
	long t=(arr[0][1]+arr[0][2] + (arr[1][2] + arr[2][1])/2);
	for(int i=0;i<3;i++)
		arr[i][i]=t-s[i];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}