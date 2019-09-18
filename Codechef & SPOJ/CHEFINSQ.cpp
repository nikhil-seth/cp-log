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
ll val(int n,int r){
	if(n==r || r==0)
		return 1;
	if(n<r)
		return 0;
	ll x=1;
	for(int i=n,j=1;i>r;i--,j++){
		x*=i;
		x/=j;
	}
	return x;
}
int main(){
	fastio
	//fio
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int arr[n];
		FOR(i,0,n-1)
			cin>>arr[i];
		sort(arr,arr+n);
		int bc=0,fc=0;
		for(int i=k-1;i>=0;i--){
			if(arr[i]==arr[k-1])
				bc++;
		}
		for(int i=k;i<n;i++){
			if(arr[i]==arr[k-1])
				fc++;
		}
		n=bc+fc;
		cout<<val(n,bc)<<endl;
	}
}