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
#define ld long double
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n;
	cin>>n;
	string s;
	map<string,pair<string,bool>> m;
	m["purple"]=mp("Power",0);
	m["green"]=mp("Time",0);
	m["blue"]=mp("Space",0);
	m["yellow"]=mp("Mind",0);
	m["red"]=mp("Reality",0);
	m["orange"]=mp("Soul",0);
	FOR(i,0,n-1){
		cin>>s;
		m[s].second=1;
	}
	cout<<6-n<<endl;
	for(auto it=m.begin();it!=m.end();it++){
		if(it->second.second==0)
			cout<<it->second.first<<endl;
	}

}