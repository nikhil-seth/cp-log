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
	map<char,int> m;
	FOR(i,0,s.length()-1){
		m[s[i]]++;
	}
	sort(s.begin(),s.end());
	while(m[s[s.length()-1]]--){
		cout<<s[s.length()-1];
	}
}