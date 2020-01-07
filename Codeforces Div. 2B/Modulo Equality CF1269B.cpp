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
	ll n,m;
	cin>>n>>m;
	map<ll,int> a,b;
	ll x;
	FOR(i,0,n-1){
		cin>>x;
		a[x]++;
	}
	FOR(i,0,n-1){
		cin>>x;
		b[x]++;
	}
	set<ll> s;
	for(auto it=a.begin();it!=a.end();it++){
		x=(m-it->first+(b.begin()->first))%m;
		s.insert(x);
	}
	ll ans=0;
	bool f=0;
	for(auto it=s.begin();it!=s.end();it++){
		f=0;
		for(auto it2=a.begin();it2!=a.end();it2++){
			if(b[(it2->first+(*it))%m]!=it2->second){
				f=1;
				break;
			}
		}
		if(f==0){
			ans=(*it);
			break;
		}
	}
	cout<<ans;
}
