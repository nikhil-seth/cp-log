#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ld unsigned long
using namespace std;
int main(){
	fastio
	//fio
	unsigned ll q,n,m;
	cin>>q;
	while(q--){
		unsigned ll ans=0;
		cin>>n>>m;
		ll x=(n/m);
		if(x>=10){
			unsigned ll a=0;
			FOR(i,1,10){
				a+=((i*(m%10))%10);
			}
			ans=a*(x/10);
			x=x%10;
		}
		if(x>=1){
			FOR(i,1,x){
				ans+=((i*(m%10))%10);
			}
		}
		cout<<ans<<endl;
	}
}