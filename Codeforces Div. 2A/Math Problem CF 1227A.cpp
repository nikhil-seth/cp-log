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
	cin>>t;
	while(t--){
		cin>>n;
		int le,re,l,r;
		le=INT_MAX;
		re=INT_MIN;
		FOR(i,0,n-1){
			cin>>l>>r;
			le=min(le,r);
			re=max(re,l);
		}
		cout<<max(0,re-le)<<endl;
	}
}