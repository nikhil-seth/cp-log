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

	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int i=0;
		ll arr[3];
		for(ll j=2;j*j<=n;j++){
			if(n%j==0){
				arr[i++]=j;
				n/=j;
				break;
			}
		}
		for(ll j=arr[0]+1;j*j<=n;j++){
			if(n%j==0 && n/j!=j && n/j!=arr[0]){
				arr[i]=j;
				arr[i+1]=n/j;
				i=3;
				break;
			}
		}
		if(i==3){
			cout<<"YES\n";
			FORA(x,arr)
				cout<<x<<' ';
			cout<<endl;
		}
		else{
			cout<<"NO\n";
		}
	}
}