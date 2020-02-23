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
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll x,y;
		y=max(b-1,a-b);
		x=a-1;
		ll ans=1;
		FOR(i,0,x-y-1){
			ans*=(x-i);
			ans/=(i+1);
		}
		cout<<ans<<endl;
	}
}