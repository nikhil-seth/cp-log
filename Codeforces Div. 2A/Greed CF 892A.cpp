#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n;
	cin>>n;
	ll totcola=0;
	ll arr[n];
	FOR(i,0,n-1){
		cin>>arr[i];
		totcola+=arr[i];
	}
	FOR(i,0,n-1){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	if(totcola>arr[n-1]+arr[n-2])
		cout<<"NO\n";
	else
		cout<<"YES\n";
}