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
void patience(int arr[],int n){
	vector<vector<int>> v;
	vector<int> te;
	for(int i=0;i<n;i++){
		int x=(lower_bound(te.begin(),te.end(),arr[i])-te.begin());
		if(te.size()!=0 && x!=te.size()){
			te[x]=arr[i];
			v[x].pb(arr[i]);
		}
		else{
			te.pb(arr[i]);
			vector<int> vx;
			vx.pb(arr[i]);
			v.pb(vx);
		}
	}
	FOR(i,0,te.size()-1)
		te[i]=v[i].size()-1;
	// Phase 1 complete.
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq1;
	FOR(i,0,te.size()-1){
		pq1.push(mp(v[i][te[i]],i));
		te[i]--;
	}
	int idx=0,xt;
	while(!pq1.empty()){
		arr[idx++]=pq1.top().first;
		xt=pq1.top().second;
		pq1.pop();
		if(te[xt]>=0){
			pq1.push(mp(v[xt][te[xt]],xt));
			te[xt]--;
		}
	}
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n;
	cin>>n;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	patience(arr,n);
	FORA(x,arr)
		cout<<x<<' ';
}