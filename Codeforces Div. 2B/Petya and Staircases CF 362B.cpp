#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(LL i=(a);i<(b);i++)
using namespace std;
int *dp;
/*void init(LL n){
	dp=new int[1000000000];
	for(LL i=0;i<=n;i++)
		dp[i]=-1;
}*/
int main(){
	LL n;
	int m;
	cin>>n>>m;
	LL arr[m];
	for(auto &x:arr)
		cin>>x;
	sort(arr,arr+m);
	int flag=0;
	if(arr[0]==1 || arr[m-1]==n){
		cout<<"NO";
		return 0;
	}
	for(int i=0;i<m;i++){
		if(arr[i]+1==arr[i+1] && arr[i+2]==arr[i+1]+1){
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
