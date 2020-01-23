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
ll cnt(ll n){
	ll x=n*(n+1)/2;
	return x;
}
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	char x;
	ll ans=0;
	set<char> st;
	FOR(i,0,k-1){
		cin>>x;
		st.insert(x);
	}
	ll pe=0;
	for(ll i=0;i<n;i++){
		while(st.find(s[i])!=st.end())
			i++;
		ans+=cnt(i-pe);
		pe=i+1;
		//cout<<ans<<' '<<pe<<endl;
}
	ans+=cnt(n-pe);
	cout<<ans;
}