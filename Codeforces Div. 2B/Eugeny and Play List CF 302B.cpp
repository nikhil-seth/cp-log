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
	ll n,m,x,y;
	cin>>n>>m;
	vector<pair<ll,ll>> p(n);
	p[0].first=1;
	cin>>x>>y;
	p[0].second=x*y;
	FOR(i,1,n-1){
		cin>>x>>y;
		p[i]={p[i-1].second+1,x*y+p[i-1].second};
	}
	while(m--){
		cin>>x;
		ll lo=0,hi=n-1,mid;	
		while(lo<=hi){
			mid=lo+(hi-lo)/2;
			if(p[mid].first<=x && p[mid].second>=x)
				break;
			else if(p[mid].first>x)
				hi=mid-1;
			else
				lo=mid+1;
		}
		cout<<mid+1<<endl;
	}
}
