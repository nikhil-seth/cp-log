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
	int n,m,ans;
	cin>>n>>m;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	sort(arr,arr+n);
	ans=0;
	for(int i=n-1;i>=0 && m>0;i--,ans++){
		m-=arr[i];
	}
	cout<<ans;
}