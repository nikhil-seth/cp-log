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
	int n;
	cin>>n;
	ll arr[n],temp;
	FORA(x,arr)
		cin>>x;
	FOR(i,0,n-1){
		cin>>temp;
		arr[i]-=temp;
	}
	sort(arr,arr+n);
	ll ctr=0;
	FOR(i,0,n-1){
		if(arr[i]>	0)
			ctr+=(n-i-1);
		else{
			ctr+=(n-(upper_bound(arr,arr+n,arr[i]*-1)-arr));
		}
	}
	cout<<ctr<<endl;
}