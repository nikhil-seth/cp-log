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
			res=(res*a)%mod;
		}
		a=(a*a)%mod;
		b>>=1;
	}
	return res;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll t,a,d,b,c;
	cin>>t;
	while(t--){
		cin>>a;
		if(a<=4){
			cout<<a<<endl;
			continue;
		}
		b=a/3;
		if(a%3==1){
			b-=1;
			d=4;
		}
		else if(a%3==2)
			d=2;
		else
			d=1;
		c=binpow(3,b);
			c=(c*d)%mod;
		cout<<c<<endl;
	}
}