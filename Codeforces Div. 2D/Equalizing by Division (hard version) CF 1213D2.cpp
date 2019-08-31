#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ld unsigned long
using namespace std;
ll fn(ll i,ll no){
	ll ctr=0;
	if(i==no)
		return 0;
	while(i>0){
		i=i>>1;
		ctr++;
		if(i==no)
			return ctr;
		if(i<no)
			return -1;
	}
	return -1;
}
int main(){
	fastio
	//fio
	int n,x,k;
	cin>>n>>k;
	vector<vector<int>> v(2e5+11);
	FOR(i,0,n-1){
		cin>>x;
		int cnt=0;
		while(x>0){
			v[x].pb(cnt++);
			x=x>>1;
		}
	}
	int ans=1e9;
	for(auto u:v){
		if(u.size()>=k){
			sort(u.begin(),u.end());
			int val=0;
			FOR(i,1,k){
				val+=u[i-1];
			}
			ans=min(val,ans);
		}
	}
	cout<<ans;
}