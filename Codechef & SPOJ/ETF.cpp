#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
/* 
Euler Totient Function.
*/
ll phi(ll n){
	ll res=n;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0){
			while(n%i==0)
				n/=i;
			res-=res/i;
		}
	}
	if(n>1)
		res-=res/n;
	return res;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll t;
	cin>>t;
	ll n;
	while(t--){
		cin>>n;
		cout<<phi(n)<<endl;
	}
}