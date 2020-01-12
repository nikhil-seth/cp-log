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
	ll t,n,s;
	cin>>t;
	while(t--){
		cin>>n>>s;
		long arr[n];
		vector<ll> brr(n);
		FOR(i,0,n-1){
			cin>>arr[i];
			if(i!=0)
				brr[i]=brr[i-1]+arr[i];
			else
				brr[i]=arr[i];
		}
		if(brr[n-1]<=s){
			cout<<0<<endl;
			continue;
		}
		ll cv=0,mc=0;
		FOR(i,0,n-1){
			ll x=upper_bound(brr.begin(),brr.end(),s+arr[i])-brr.begin();
			if(mc<x && i+1<=x){
				mc=x;
				cv=i;
			}
		}
		cout<<cv+1<<endl;
	}
}