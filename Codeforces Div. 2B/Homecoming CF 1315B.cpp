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
	ll t;
	cin>>t;
	ll a,b,p,n;
	string s;
	while(t--){
		cin>>a>>b>>p;
		cin>>s;
		n=s.length();
		vector<ll> v1,v2;
		v1.pb(0);
		v2.pb(n);
		for(ll i=n-2;i>=0;){
			ll j=i;
			while(s[i]==s[j] && j>=0)
				j--;
			j++;
			ll x;
			if(s[j]=='A')
				x=a;
			else
				x=b;
			v1.pb(v1[v1.size()-1]+x);
			v2.pb(j+1);
			i=j-1;
		}
		ll x=(upper_bound(v1.begin(),v1.end(),p)-v1.begin())-1;
		cout<<v2[x]<<endl;
	}
}
 