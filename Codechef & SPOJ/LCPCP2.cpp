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
#define n 1000001
using namespace std;
ul binpow(ul a,ul b,ul p){
	ul res=1;
	while(b>0){
		if(b&1)
			res=(res*a)%p;
		b>>=1;
		a=(a*a)%p;
	}
	return res;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ul a,b,p,t;
	cin>>t;
	FOR(i,1,t){
		cin>>a>>b>>p;
		cout<<i<<". "<<binpow(a,b,p)<<endl;
	}
}	