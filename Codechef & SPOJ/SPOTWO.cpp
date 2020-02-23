#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ul unsigned long long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
#define mod 1000000007
using namespace std;
ul binpow(ul a,ul x){
	ul ans=1;
	while(x>0){
		if(x&1)
			ans=(ans*a)%mod;
		x>>=1;
		a=(a*a)%mod;

	}
	return ans;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ul x=0;
		ul a=1;
		while(n>0){
			if(n&1)
				x=(x+a)%(mod-1);
			n>>=1;
			a=(a*10)%(mod-1);
		}

		x=(x*2)%(mod-1);
		x=binpow(2,x);
		cout<<x<<endl;
	}
}