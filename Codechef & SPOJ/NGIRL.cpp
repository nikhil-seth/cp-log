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
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll max=1e5+1;
	vector<ll> v;
	v.pb(4);
	vector<bool> vis(50000,1);
	for(ll i=3;i<max;i+=2){
		if(vis[(i-3)/2]){
			v.pb(i*i);
			for(ll j=i*i;j<max;j+=(2*i))
				vis[(j-3)/2]=0;
		}
	}
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll x1=(upper_bound(v.begin(),v.end(),n)-v.begin());
		ll x2=(upper_bound(v.begin(),v.end(),k)-v.begin());
		cout<<x1<<' ';
		if(x1-x2<0)
			cout<<0;
		else
			cout<<x1-x2;
		cout<<endl;
	}
}