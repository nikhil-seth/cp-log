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
	double minv=INT_MAX,a,b;
	while(n--){
		cin>>a>>b;
		minv=min(minv,a/b);
	}
	cout<<fixed<<setprecision(8)<<minv*m;
}