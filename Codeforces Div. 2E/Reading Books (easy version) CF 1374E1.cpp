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
	ll t,n,qt,a;
	bool b,c;
	cin>>n>>qt;
	vector<ll> v1,v2,v3;
	FOR(i,0,n-1){
		cin>>a>>b>>c;
		if(b && c) v1.pb(a);
		else if(b) v2.pb(a);
		else if(c)v3.pb(a);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	sort(v3.begin(),v3.end());
	if(v1.size()+v2.size()<qt || v1.size() +v3.size()<qt){
		cout<<-1;
		return 0;
	}
	ll ans=0;
	int i=0,j=0,k=0;
	while(i<v1.size() && j<v2.size() && k<v3.size() && qt){
		if(v1[i]<v2[j]+v3[k])
			ans+=v1[i++];
		else
			ans+=v2[j++]+v3[k++];
		qt-=1;
	}
	while(i<v1.size() && qt){
		ans+=v1[i++],qt-=1;
	}
	while(j<v2.size() && k<v3.size() && qt)
		ans+=v2[j++]+v3[k++],qt-=1;
	cout<<ans;
}