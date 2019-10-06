// https://www.geeksforgeeks.org/maximum-games-played-winner/
#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
	fastio
	//fio
	ll n;
	cin>>n;
	ll a,b,c;
	a=1;
	b=2;
	ll i=0;
	while(!(a<=n && b>n)){
		i++;
		c=b;
		b=a+b;
		a=c;
	}
	cout<<i;
}
