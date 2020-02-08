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
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif

	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll ctr=0;
		ll arr[n+1];
		arr[0]=0;
		FOR(i,1,n)
			cin>>arr[i];
		ll x;
		FOR(i,0,n-1){
			cin>>x;
			if(arr[i+1]-arr[i]>=x)
				ctr++;
		}
		cout<<ctr<<endl;
	}
}