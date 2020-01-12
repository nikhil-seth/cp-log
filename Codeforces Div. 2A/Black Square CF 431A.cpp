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
ll fe(ll n){
	if(n==0)
		return 1;
	if(n==1)
		return 3;
	if(n%2==0){
		ll x=fe(n/2);
		x=x*x;
		x%=1000000009;
		return x;
	}
	ll x=fe(n-1);
	x*=3;
	x%=1000000009;
	return x;
}
ll fn(ll dp[],ll n, ll h){
	if(n==0)
		return dp[0];
	if(dp[n]!=0)
		return dp[n];
	for(int i=1;i<=h && n-i>=0;i++)
		dp[n]=(dp[n]+(fn(dp,n-i,h)*fe(i))%1000000009)%1000000009;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int a[5];
	FOR(i,1,4)
		cin>>a[i];
	string s;
	cin>>s;
	ll ctr=0;
	FOR(i,0,s.length()-1){
		ctr=ctr+a[s[i]-48];
	}cout<<ctr;
}
