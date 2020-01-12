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
	ll a[3],ctr;
	FOR(i,0,2)
		cin>>a[i];
	ctr=min((a[0]+a[1]+a[2])/3,min(min(a[0]+a[1],a[0]+a[2]),a[1]+a[2]));
	cout<<ctr;
}