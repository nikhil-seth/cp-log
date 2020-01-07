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
	
	ll a[2],b;
	a[0]=a[1]=b=0;
	FOR(i,0,n-1){
		cin>>b;
		a[i%2]+=(b+1)/2;
		a[(i+1)%2]+=b/2;
	}
	cout<<min(a[0],a[1]);
}