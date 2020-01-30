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
	int t;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		ll ans=0;
		FOR(i,0,s.length()-1){
			if(s[i]>=48 && s[i]<58)
				ans+=(s[i]-48);
		}
		cout<<ans<<endl;
	}
}