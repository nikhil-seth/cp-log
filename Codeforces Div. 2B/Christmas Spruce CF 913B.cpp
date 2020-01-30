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
	int n,x;
	cin>>n;
	vector<int> adj[n];
	FOR(i,1,n-1){
		cin>>x;
		adj[x-1].pb(i);
	}
	bool f=1;
	FOR(i,0,n-1){
		int ctr=0;
		if(adj[i].size()==0)
			continue;
		FORA(qt,adj[i]){
			if(adj[qt].size()==0)
				ctr++;
		}
		if(ctr<3){
			f=0;
			break;
		}
	}
	if(f)
		cout<<"Yes";
	else
		cout<<"No";
}