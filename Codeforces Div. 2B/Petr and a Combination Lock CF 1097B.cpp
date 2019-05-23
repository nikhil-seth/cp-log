#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
using namespace std;
bool dp(int arr[],int n,int val){
	if(val<0)
		val=360+val;
	else if(val>=360)
		val=val-360;
	if(n==0 && val==0)
		return 1;
	if(n==0 && val!=0)
		return 0;
	return dp(arr,n-1,val-arr[n-1]) || dp(arr,n-1,val+arr[n-1]);
}
int main(){
	fastio
	//fio
	int n;
	cin>>n;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	if(dp(arr,n,0))
		cout<<"YES";
	else
		cout<<"NO";
}