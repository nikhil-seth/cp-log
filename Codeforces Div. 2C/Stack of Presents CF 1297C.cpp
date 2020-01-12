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
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		int arr[n],x,pi;
		pi=0;
		FOR(i,0,n-1){
			cin>>x;
			arr[x-1]=i;
		}
		ll ans=0;
		int brr[m];

		FOR(i,0,m-1){
			cin>>brr[i];
			brr[i]-=1;
			if(arr[brr[i]]<pi)
				ans++;
			else{
				ans+=(2*(arr[brr[i]]-i)+1);
				pi=arr[brr[i]];
			}
		}
		cout<<ans<<endl;
	}
}