#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
using namespace std;
int main(){
	fastio
	//fio
	int n,k;
	cin>>n>>k;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	LL ctr=0;
	for(int i=1;i<n;i++){
		if(arr[i]+arr[i-1]<k){
			ctr=ctr+(k-arr[i]-arr[i-1]);
			arr[i]=k-arr[i-1];
		}
	}
	cout<<ctr<<endl;
	FORA(x,arr)
		cout<<x<<' ';
}