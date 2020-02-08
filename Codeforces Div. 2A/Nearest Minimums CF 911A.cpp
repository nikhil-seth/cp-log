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
	int n;
	cin>>n;
	long x;
	map<long,vector<int>> m;
	FOR(i,0,n-1){
		cin>>x;
		m[x].pb(i);
	}
	vector<int> v=m.begin()->second;
	sort(v.begin(),v.end());
	int min_val=INT_MAX;
	for(int i=0;i<v.size()-1;i++){
		min_val=min(min_val,v[i+1]-v[i]);
	}
	cout<<min_val;
}