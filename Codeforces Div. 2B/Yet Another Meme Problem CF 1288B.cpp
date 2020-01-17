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
	ll t,a,b;
	cin>>t;
	ll res=0;
	while(t--){
		res=0;
		cin>>a>>b;
		for(ll x=9;x<=b;){
			res++;
			x=x*10+9;
		}
		res*=a;
		cout<<res<<endl;
	}
}