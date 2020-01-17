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
	ll n,d,t;
	cin>>t;
	while(t--){
		cin>>n>>d;
		if(d<=n){
			cout<<"YES\n";
			continue;
		}
		ll qt=ceil(sqrt(d))-1;
		if(qt+ceil(d/double(qt+1))<=n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}