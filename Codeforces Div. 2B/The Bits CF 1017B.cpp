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
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	vector<int> v;
	int c[2];
	c[1]=c[0]=0;
	FOR(i,0,n-1){
		c[s1[i]-48]++;
		if(s2[i]=='0')
			v.pb(i);
	}
	llThe Bits ans=0;
	FORA(x,v){
		if(s1[x]=='1'){
			ans+=c[0];
			c[1]--;
		}
		else{
			ans+=c[1];
			c[0]--;
		}
	}
	cout<<ans;
}
