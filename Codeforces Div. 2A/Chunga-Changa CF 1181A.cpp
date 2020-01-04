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
	ll x,y,z,a,b,c;
	cin>>x>>y>>z;
	a=x/z;
	x-=(a*z);
	b=y/z;
	y-=(b*z);
	c=(x+y)/z;
	a=a+b+c;
	cout<<a<<' ';
	if(x<=y && c>0)
		cout<<c*z-y;
	else if(c>0)
		cout<<c*z-x;
	else
		cout<<0;
}
