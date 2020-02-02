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
bool fn1(ll arr[],int n){
	int me=0;
	for(int i=n-1;i>=0;i--,me++){
		if(arr[i]<me)
			return 0;
	}
	return 1;
}
bool fn2(ll arr[],int n){
	int me=0;
	for(int i=0;i<n;i++,me++){
		if(arr[i]<me)
			return 0;
	}
	return 1;
}
bool fn3(ll arr[],int n){
	int me=0,i=0;
	for(;i<n;i++,me++){
		if(arr[i]<me)
			break;
	}
	i--;
	int me2=0;
	int j=0;
	for(j=n-1;j>=i;j--,me2++){
		if(arr[j]<me2)
			return 0;
	}
	return 1;
}

int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll arr[n];
		FORA(x,arr)
			cin>>x;
		if((fn1(arr,n) || fn2(arr,n)) || fn3(arr,n))
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}

 