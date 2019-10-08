#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
	fastio
	fio
	ll n;
	cin>>n;
	int arr[n];
	FORA(x,arr)	cin>>x;
	int me,msp;
	int prev;
	me=msp=1;
	if(arr[n-1]>0)
		prev=1;
	else
		prev=0;
	int dp[n];
	dp[n-1]=1;
	for(int i=n-2;i>=0;i--){
		//cout<<i<<' '<<arr[i]<<' '<<prev<<endl;
		if((prev==0 && arr[i]>=0) || (prev==1 && arr[i]<0))
			me+=1;
		else
			me=1;
		if(arr[i]>0)
			prev=1;
		else
			prev=0;
		dp[i]=me;
	}
	FORA(u,dp)
		cout<<u<<' ';
	cout<<endl;
}