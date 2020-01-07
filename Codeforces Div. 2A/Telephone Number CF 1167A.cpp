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
	int t,n;
	string s;
	cin>>t;
	while(t--){
		cin>>n>>s;
		int x=-1;
		FOR(i,0,n-1){
			if(s[i]=='8'){
				x=i;
				break;
			}
		}
		if(x==-1 || n-1-x<10)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
}