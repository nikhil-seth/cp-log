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
ll cnt(ll n){
	ll x=n*(n+1)/2;
	return x;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll n,k;
	cin>>n;
	ll arr[n];
	FORA(x,arr)
		cin>>x;
	sort(arr,arr+n);
	ll x1,x2;
	ll ans=0;
	ans=arr[n-1]-arr[0];
	cout<<ans<<' ';
	if(ans==0){
		ans=(n*(n-1))/2;
	}
	else{
		x1=0;
		x2=0;
		while(arr[x1]==arr[0] && x1<n-1){
			x1++;
		}
		int i=n-1;
		while(arr[n-1]==arr[i] && i>=x1){
			i--;
		}
		x2=n-i-1;
		ans=x2*x1;

	}	//cout<<x1<<' '<<x2<<endl;
	cout<<ans;
}