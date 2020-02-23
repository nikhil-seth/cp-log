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
#define n 86028122
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	vector<ll> pr;
	vector<bool> vis(n,1);
	pr.pb(2);
	for(ll i=3;i<n;i+=2){
		if(vis[i]==1){
			pr.pb(i);
			for(ll j=i*i;j<n;j+=(2*i))
				vis[j]=0;
		}
	}
	ll c=0;
	cin>>c;
	while(c--){
		ll xt;
		cin>>xt;
		cout<<pr[xt-1]<<endl;
	}
}