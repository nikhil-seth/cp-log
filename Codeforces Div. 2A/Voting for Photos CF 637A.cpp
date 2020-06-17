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
	unordered_map<ll,ll> m;
	ll n,x,ctr=0,ans=-1;
	cin>>n;
	FOR(i,0,n-1){
		cin>>x;
		m[x]++;
		if(m[x]>ctr){
			ans=x;
			ctr=m[x];
		}
	}
	cout<<ans;
}