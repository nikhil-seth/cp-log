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
	int t,n;
	cin>>t;
	while(t--){
		vector<int> v(26);
		FOR(i,0,25){
			cin>>v[i];
		}
		string s;
		cin>>s;
		ll ans=0;
		vector<bool> vis(26,0);
		FOR(i,0,s.length()-1){
			vis[s[i]-97]=1;
		}
		FOR(i,0,25){
			if(!vis[i])
				ans+=v[i];
		}
		cout<<ans<<endl;
	}
}