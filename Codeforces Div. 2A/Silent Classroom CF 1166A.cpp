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
	int n;
	cin>>n;
	string s;
	map<char,int> m;
	FOR(i,0,n-1){
		cin>>s;
		m[s[0]]++;
	}
	ll ans=0;
	for(auto it=m.begin();it!=m.end();it++){
		if(it->second==1)
			continue;
		int x=it->second;
		ans+=((x/2)*(x/2-1)/2);
		ans+=(((x+1)/2)*((x+1)/2-1)/2);
	}
	cout<<ans;
}