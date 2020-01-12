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
using namespace std;
ll fe(ll a,ll n=998244351){
	if(n==0)
		return 1;
	if(n==1)
		return a;
	if(n%2==0){
		ll x=fe(a,n/2);
		return (x*x)%998244353;
	}
	ll x=fe(a,n-1);
	return (x*a)%998244353;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n,x;
	cin>>n;
	int arr[n];
	vector<int> v[n];
	map<int,int> m;
	FOR(i,0,n-1){
		cin>>arr[i];
		FOR(j,0,arr[i]-1){
			cin>>x;
			v[i].pb(x);
			m[x]++;
		}
	}
	ll ans=0;
	ll fen=fe(n);
	fen=(fen*fen)%998244353;
	FOR(i,0,n-1){
		ll tx,ty;
		tx=0;
		ty=(fe(arr[i])*fen)%998244353;
		FOR(j,0,arr[i]-1)
			tx=(tx+m[v[i][j]])%998244353;
		ans=(ans+(tx*ty)%998244353)%998244353;
	}
	cout<<ans;
}