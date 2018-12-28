#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n][2],res[n][2];
	int tes[100001];
	for(auto &x:tes)
		x=0;

	for(int i=0;i<n;i++){
		res[i][0]=res[i][1]=n-1;
		cin>>arr[i][0]>>arr[i][1];
		tes[arr[i][0]]++;
	}
	for(int i=0;i<n;i++){
		res[i][0]=n-1;
		res[i][0]+=tes[arr[i][1]];
		res[i][1]=n-1;
		res[i][1]-=tes[arr[i][1]];
	}
	for(int i=0;i<n;i++)
		cout<<res[i][0]<<' '<<res[i][1]<<endl;
	return 0;
}
