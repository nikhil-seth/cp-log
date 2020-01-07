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
	int t,n,k1,k2;
	cin>>t;
	int x=-1,y;
	while(t--){
		cin>>n>>k1>>k2;
		FOR(i,1,k1){
			cin>>y;
			if(y==n)
				x=1;
		}
		FOR(i,1,k2){
			cin>>y;
			if(y==n)
				x=2;
		}
		if(x==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}