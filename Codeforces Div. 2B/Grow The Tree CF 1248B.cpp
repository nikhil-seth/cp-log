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
	int n;
	cin>>n;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	sort(arr,arr+n);
	ll h,w;
	h=w=0;
	if(n%2!=0){
		w+=arr[n-1];
		n--;
	}
	for(int i=0,j=n-1;i<j;i++,j--){
		w+=arr[j];
		h+=arr[i];
	}
	cout<<h*h+w*w;
}
