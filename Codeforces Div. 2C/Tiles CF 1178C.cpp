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
ll fm(ll n){
	if(n==0)
		return 1;
	if(n==1)
		return 2;
	if(n%2==0){
		ll x=fm(n/2);
		x*=x;
		x%=998244353;
		return x;
	}
	ll x=fm(n-1);
	x*=2;
	x%=998244353;
	return x;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll n,m;
	cin>>n>>m;
	ll qt=fm(n+m);
	cout<<qt;
}