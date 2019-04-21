// Coin Change
// Link : https://practice.geeksforgeeks.org/problems/coin-change/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>m;
		int arr[m];
		FORA(x,arr)
			cin>>x;
		cin>>n;
		int table[n+1];
		FORA(x,table)
			x=0;
		table[0]=1;	// When n==0,total count=1;
		for(int i=0;i<m;i++){
			for(int j=arr[i];j<=n;j++)
				table[j]+=table[j-arr[i]];
		}
		cout<<table[n]<<endl;
	}
	return 0;
}