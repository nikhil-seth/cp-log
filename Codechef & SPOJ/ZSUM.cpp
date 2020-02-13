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
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
#define mod 10000007
using namespace std;
ll binexp(ll a,ll b){
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
	ll n,k,x1,x2;
	while(1){
		cin>>n>>k;
		if(n==0 && k==0)
			return 0;
		x1=binexp(n,k);
		x2=0;
		x2=(x2+x1)%mod;
		x1=binexp(n,n);
		x2=(x2+x1)%mod;
		x1=binexp(n-1,n-1);
		x2=(x2+x1)%mod;
		x2=(x2+x1)%mod;
		x1=binexp(n-1,k);
		x2=(x2+x1)%mod;
		x2=(x2+x1)%mod;
		cout<<x2<<endl;
	}
}