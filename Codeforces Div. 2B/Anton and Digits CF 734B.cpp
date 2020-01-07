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
	int k2,k3,k5,k6;
	ll ans=0;
	cin>>k2>>k3>>k5>>k6;
	int a=min(k2,min(k5,k6));
	k2-=a;
	k5-=a;
	k6-=a;
	ans+=(a*256);
	a=min(k2,k3);
	ans+=(a*32);
	cout<<ans;
}