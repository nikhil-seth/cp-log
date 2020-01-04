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
	ll t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ll n2=n;
		ll ans=0;
		ans=n/k;
		n-=ans*k;
		if(n<k/2)
			n=0;
		else
			n-=(k/2);
		cout<<n2-n<<endl;
	}
}