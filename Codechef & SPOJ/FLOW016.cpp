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
using namespace std;
ll gcd(ll a,ll b){
	if(a==0)
		return b;
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll a,b,t;
	cin>>t;
	while(t--){
		cin>>a>>b;
		ll x=gcd(a,b);
		cout<<x<<' ';
		x=(a*b)/x;
		cout<<x<<endl;
	}
}