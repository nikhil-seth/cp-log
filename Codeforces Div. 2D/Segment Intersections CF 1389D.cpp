#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
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
ll cost(ll x,ll k,ll a,ll b){
	ll x1,x2=0;
	x1=a*x+min(b*x,k);
	k-=min(b*x,k);
	x1+=2*k;
	return x1;
}
int main(){
	fastio
	ll t,n,k,l1,r1,l2,r2;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cin>>l1>>r1;
		cin>>l2>>r2;
		if(l1>l2)
			swap(l1,l2),swap(r1,r2);
		ll a=0,b=0,c=0;
		b=max(r1,r2)-l1;
		if(l2>r1)
			a=l2-r1;
		else
			c=min(r1,r2)-l2,b-=c;
		k=max(0LL,k-c*n);
		ll lo,hi,mid,ans=INT_MAX;
		ll t1;
		//cout<<a<<' '<<b<<' '<<c<<endl;
		FOR(i,1,n){
			t1=cost(i,k,a,b);
			ans=min(ans,t1);
		}
		cout<<ans<<endl;
	}
}