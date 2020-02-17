#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
using namespace std;
ll binpow(ll a,ll b){
	ll res=1;
	while(b>0){
		if(b&1){
			res=(res*a)%10;
		}
		a=(a*a)%10;
		b>>=1;
	}
	return res;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<binpow(a,b)<<endl;
	}
	return 0;
}