#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main(){ 	
	int n,m;
	cin>>n>>m;
	LL arr[n+1],x,b;
	arr[0]=0;
	for(int i=1;i<=n;i++){
		cin>>x;
		arr[i]=x+arr[i-1];
	}
	while(m--){
		cin>>b;
		int iter=lower_bound(arr+1,arr+n+1,b) - arr;
		cout<<iter<<' '<<b-arr[iter-1]<<endl;
	}
}
