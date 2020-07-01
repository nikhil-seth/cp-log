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
int main(){
	fastio
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll c2=0,c3=0;
		while(n!=1 && n%2==0)
			c2+=1,n/=2;
		while(n!=1 && n%3==0)
			c3+=1,n/=3;
		ll ans=0;
		if(n!=1 || c3<c2)
			ans=-1;
		else
			ans=2*c3-c2;
		cout<<ans<<endl;
	}
}