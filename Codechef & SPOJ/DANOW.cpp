// Find Optimum operation
// Link : https://practice.geeksforgeeks.org/problems/find-optimum-operation/0
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;


int main(){
	int n,q;
	cin>>n>>q;
	long arr[n+1];
	int prev=0,t,l,r;
	arr[0]=0;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	for(int i=1;i<=n;i++){
		cin>>t;
		arr[i]=(arr[i]*t)+arr[i-1];
	}
	//for(int i=0;i<=n;i++)
		//cout<<arr[i]<<' ';
	//cout<<endl;
	while(q--){
		cin>>l>>r;
		cout<<arr[r]-arr[l-1];
		cout<<endl;
	}
}
