#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;

int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n;
	cin>>n;
	long arr[n];
	for(auto &x:arr)
		cin>>x;
	int dp;
	int prev=1;
	int max_val=1;
	for(int i=1;i<n;i++){
		//cout<<max_val<<' ';
		if(arr[i]>arr[i-1])
			dp=prev+1;
		else
			dp=1;
		prev=dp;
		max_val=max(max_val,dp);
	}
	cout<<max_val;
}
