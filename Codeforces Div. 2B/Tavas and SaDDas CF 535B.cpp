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
	string s;
	cin>>s;
	ll ans=0;
	ans=pow(2,s.length())-1;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='7')
			ans=ans+pow(2,s.length()-1-i);
	}
	cout<<ans;
}