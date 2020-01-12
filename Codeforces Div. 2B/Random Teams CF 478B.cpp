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
	ll a,b;
	cin>>a>>b;
	ll k1,k2;
	k1=a/b;
	k2=a%b;
	ll ans=(b-k2)*(k1*(k1-1)/2) + k2*((k1+1)*k1/2);
	cout<<ans<<' ';
	k1=a-b+1;
	ans=k1*(k1-1)/2;
	cout<<ans;
}