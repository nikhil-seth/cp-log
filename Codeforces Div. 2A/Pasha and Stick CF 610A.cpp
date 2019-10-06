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
	if(n%2!=0)
		cout<<0;
	else{
		n/=2;
		if(n%2==0)
			n=n/2-1;
		else
			n/=2;
		cout<<n;
	}
}