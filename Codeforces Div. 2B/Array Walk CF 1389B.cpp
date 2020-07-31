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
map<tuple<ll,ll,ll>,ll> m;
ll msum(ll arr[],ll i,ll n,ll k,ll z){
	//cout<<i<<' '<<k<<' '<<z<<endl;
	if(k==1 && i==n-1 && z==0) return INT_MIN;
	if(k==0) return arr[i];
	if(m.find(make_tuple(i,k,z))!=m.end()) return m[make_tuple(i,k,z)];
	ll a=0,b=0;
	if(i<n-1)
		a=msum(arr,i+1,n,k-1,z)+arr[i];
	if(k>=2 && z>0 && i>0)
		b=msum(arr,i,n,k-2,z-1) + arr[i-1]+arr[i];
	else if(k==1 && z>0 && i>0)
		b=msum(arr,i-1,n,k-1,z-1) + arr[i];
	m[make_tuple(i,k,z)]=max(a,b);
	return max(a,b);
}

int main(){
	fastio
	ll t;
	cin>>t;
	while(t--){
		m.clear();
		ll n,k,z;
		cin>>n>>k>>z;
		ll arr[n];
		FORA(x,arr) cin>>x;
		cout<<msum(arr,0,n,k,z)<<endl;
	}
}