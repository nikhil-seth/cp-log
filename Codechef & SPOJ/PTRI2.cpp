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
	vector<bool> vis(50000000,1);
	vector<ll> v;
	v.pb(2);
	for(ll i=3;i<=100000000;i+=2){
		if(vis[(i-3)/2]){
			v.pb(i);
			for(ll j=i*i;j<=100000000;j+=(2*i))
				vis[(j-3)/2]=0;
		}
	}
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll x=(upper_bound(v.begin(),v.end(),n)-v.begin())-1;
		if(v[x]!=n)
			cout<<-1;
		else{
			ll k=1;
			while(x+1>(k*(k+1)/2))
				k++;
			cout<<k<<' '<<x-(k*(k-1)/2)+1;
		}
		cout<<endl;
	}
}