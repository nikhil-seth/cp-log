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
	int t,a,b,c;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		ll ans=0;
		int x2=min(b,c/2);
		ans+=(3*x2);
		b-=x2;
		x2=min(a,b/2);
		ans+=(3*x2);
		cout<<ans<<endl;
	}
}
