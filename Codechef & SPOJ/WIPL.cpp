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
bool fn(ll mid,ll arr[],ll k,ll n,ll tot){
	vector<bool> v2(k+1,0),v(k+1,0);
	v[0]=1;
	FOR(i,mid,n-1){
		if(arr[i]>=k && tot-arr[i]>=k) return 1;
		for(int j=0;j<=k;j+=1){
			if(arr[i]+j>=k && v[j] && tot-arr[i]-j>=k)
				return 1;
			else if(arr[i]+j<=k && v[j])
				v2[arr[i]+j]=v[j];
		}
		v=v2;
	}
	return 0;
}
int main(){
	fastio
	ll t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ll arr[n],s=0;
		FORA(x,arr) cin>>x,s+=x;
		if(s<2*k){
			cout<<-1<<endl;
			continue;
		}
		sort(arr,arr+n);
		ll tot[n+1];
		tot[0]=0;
		FOR(i,1,n)
			tot[i]=tot[i-1]+arr[i-1];
		ll lo=2,hi=n,mid,ans=-1;
		while(lo<=hi){
			mid=lo+(hi-lo)/2;
			//cout<<lo<<' '<<hi<<endl;
			if(fn(n-mid,arr,k,n,tot[n]-tot[n-mid])){
				ans=mid;
				hi=mid-1;
			}
			else
				lo=mid+1;
		}
		cout<<ans<<endl;
	}
}
