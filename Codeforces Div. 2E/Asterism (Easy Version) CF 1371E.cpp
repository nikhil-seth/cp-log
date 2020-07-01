#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
bool fn(ll arr[],ll n,ll lo,ll p){
	ll i=0,ctr=0,j,k;
	bool f=0;
	//cout<<"lo"<<lo<<endl;
	for(k=0;k<n;k+=1){
		for(j=i;j<n;j+=1){
			if(arr[j]<=lo)
				ctr+=1;
			else
				break;
		}
		i=j;
		if(ctr==0) break;
		lo+=1;
		if(ctr%p==0){
			f=1;
			break;
		}
		ctr-=1;
		//cout<<"upd "<<i<<' '<<ctr<<' '<<prod<<' '<<lo<<endl;
	}
	//cout<<"X "<<prod<<' '<<lo<<endl;
	if(k<n || f) return 0;
	return 1;
}
int main(){
	fastio
	ll t,n,p;
	t=1;
	while(t--){
		cin>>n>>p;
		ll arr[n];
		FORA(x,arr)
			cin>>x;
		sort(arr,arr+n);
		ll lo=arr[0],hi=arr[n-1]-1;
		vector<ll> ans;
		while(lo<=hi){
			if(fn(arr,n,lo,p))
				ans.pb(lo);
			lo+=1;
		}
		cout<<ans.size()<<endl;
		FORA(x,ans)
			cout<<x<<' ';
	}
}