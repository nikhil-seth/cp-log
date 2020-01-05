#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll n;
	cin>>n;
	vector<ll> mine;
	vector<ll> maxe;
	ll l,maxelem,minelem,tmp,vvl;
	FOR(i,0,n-1){
		cin>>l;
		cin>>tmp;
		maxelem=tmp;
		minelem=tmp;
		vvl=0;
		FOR(j,1,l-1){
			cin>>tmp;
			if(minelem<tmp)
				vvl=1;
			minelem=min(minelem,tmp);
			maxelem=max(maxelem,tmp);
		}
		if(vvl==0){
			mine.pb(minelem);
			maxe.pb(maxelem);
		}
	}
	ll k=mine.size(),ctr;
	ctr=(n*n-k*k);
	sort(maxe.begin(),maxe.end());
	FOR(i,0,k-1){
		int tq=upper_bound(maxe.begin(),maxe.end(),mine[i])-maxe.begin();
		ctr+=(k-tq);
	}
	cout<<ctr;
}