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

	int n,t;
	cin>>n>>t;
	ll arr[n];
	FORA(x,arr)
		cin>>x;
	map<ll,ll> m;
	queue<ll> q;
	FOR(i,0,n-1){
		q.push(arr[i]);
		m[arr[i]]=0;
	}
	vector<ll> res;
	ll ans=0;
	while(!q.empty()){
		if(res.size()==t)
			break;
		ll x=q.front();
		q.pop();
		if(m[x]!=0){
			res.pb(x);
			ans+=m[x];
		}
		if(m.find(x-1)==m.end()){
			m[x-1]=m[x]+1;
			q.push(x-1);
		}
		if(m.find(x+1)==m.end()){
			m[x+1]=m[x]+1;
			q.push(x+1);
		}
	}
	cout<<ans<<endl;
	FORA(x,res)
		cout<<x<<' ';
}
