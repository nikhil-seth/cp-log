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
	vector<vector<pi>> v;
	vector<int> te;
	for(int i=0;i<n;i++){
		int x=(lower_bound(te.begin(),te.end(),arr[i])-te.begin());
		if(te.size()!=0 && x!=te.size()){
			te[x]=arr[i];
			if(x==0)
				v[x].pb(mp(arr[i],-1));
			else
				v[x].pb(mp(arr[i],v[x-1].size()-1));
		}
		else{
			te.pb(arr[i]);
			vector<pi> vx;
			if(x==0)
				vx.pb(mp(arr[i],-1));
			else
				vx.pb(mp(arr[i],v[x-1].size()-1));
			v.pb(vx);
		}
	}
	int idx=v[te.size()-1].size()-1;
	vector<int> ans;
	for(int i=te.size()-1;i>=0;i--){
		ans.pb(v[i][idx].first);
		idx=v[i][idx].second;
	}
	reverse(ans.begin(),ans.end());
	FORA(xqw,ans)
		cout<<xqw<<' ';
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
}