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
	int n,m,r,x;
	cin>>n>>m>>r;
	int minval,maxval;
	minval=INT_MAX;
	maxval=INT_MIN;
	FOR(i,0,n-1){
		cin>>x;
		minval=min(minval,x);
	}
	FOR(i,0,m-1){
		cin>>x;
		maxval=max(maxval,x);
	}
	if(minval<maxval){
		n=r/minval;
		r-=n*minval;
		r+=n*maxval;
	}
	cout<<r;
}