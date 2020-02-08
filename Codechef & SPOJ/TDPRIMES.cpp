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
#define MAX 50000000
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	bitset<MAX> vis;
	vis.set();
	cout<<2<<endl;
	ll ctr=1;
	for(ll i=3;i<=1e8;i+=2){
		if(vis[(i-3)/2]){
			ctr++;
			if(ctr%100==1)
				cout<<i<<endl;
			for(ll j=i*i;j<=1e8;j+=(2*i))
				vis[(j-3)/2]=0;
		}
	}
}