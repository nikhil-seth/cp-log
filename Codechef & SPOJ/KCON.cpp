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
ll kadane(ll arr[],int n,int m){
	ll ms,s;
	ms=s=arr[0];
	for(int i=1;i<m;i++){
		if(s<0)
			s=arr[i%n];
		else
			s+=arr[i%n];
		ms=max(ms,s);
	}
	return ms;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	ll t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ll arr[n];
		ll ans=0,x=0;
		FORA(x,arr){
			cin>>x;
			ans+=x;
		}
		if(k==1){
			cout<<kadane(arr,n,n);
		}
		else{
			x=kadane(arr,n,n*2);
			if(ans>0)
				ans=ans*(k-2)+x;
			else
				ans=x;
			cout<<ans;
		}
		cout<<endl;
	}
}