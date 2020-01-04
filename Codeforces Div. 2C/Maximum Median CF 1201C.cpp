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
bool fn(ll mid,ll arr[],ll n,ll k){
	ll x=0;
	for(ll i=n/2;i<n;i++){
		if(mid-arr[i]>0)
			x+=(mid-arr[i]);
		if(x>k)
			return 0;
	}
	if(x>k)
		return 0;
	return 1;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	FORA(x,arr)
		cin>>x;	
	sort(arr,arr+n);
	ll l=1,r=10000000000,mid;
	while(l!=r){
		//cout<<l<<' '<<r<<endl;
		mid=(l+r+1)/2;
		if(fn(mid,arr,n,k))
			l=mid;
		else
			r=mid-1;
	}
	cout<<r;
}
	