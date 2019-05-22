#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;

int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	LL n;
	cin>>n;
	map<LL,LL> m;
	LL t,max_val=0;
	FOR(i,1,n){
		cin>>t;
		m[t]++;
		max_val=max(max_val,t);
	}
	LL a0,a1,a2;
	map<LL,LL>::iterator it=m.begin();
	a0=0;
	a1=(LL)(it->first)*(LL)(it->second);
	//cout<<a0<<' '<<a1<<' ';
	LL i=it->first;
	it++;
	while(it!=m.end()){
		if(i+1==it->first)
			a2=max(a1,a0+it->first*it->second);
		else
			a2=a1+it->first*it->second;
		a0=a1;
		a1=a2;
		i=it->first;
		it++;
	}
	cout<<a1;
}