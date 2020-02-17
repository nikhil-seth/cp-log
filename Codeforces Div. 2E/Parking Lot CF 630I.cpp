#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define mod 1000000007
using namespace std;
ll binpow(ll a,ll b){
	ll res=1;
	while(b>0){
		if(b&1){
			res=res*a;
		}
		a=(a*a);
		b>>=1;
	}
	return res;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll n;
	cin>>n;
	if(n==3)
		cout<<24;
	else{
		ll x=12*(3*n-1);
		x=x*binpow(4,n-4);
		cout<<x;
	}
}