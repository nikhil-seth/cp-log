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
	int n,m;
	cin>>n>>m;
	string s1[n],s2[m];
	FOR(i,0,n-1){
		cin>>s1[i];
	}
	FOR(i,0,m-1){
		cin>>s2[i];
	}
	int t;
	cin>>t;
	while(t--){
		int yr;
		cin>>yr;
		yr-=1;
		cout<<s1[yr%n]<<s2[yr%m]<<endl;
	}
}