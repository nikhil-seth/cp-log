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
	ll n,m;
	cin>>n>>m;
	ll arr[n];
	ll val=0;
	FORA(x,arr)
		cin>>x;
	FOR(i,0,n-1){
		val+=arr[i];
		cout<<val/m<<' ';
		val=val%m;
	}
}