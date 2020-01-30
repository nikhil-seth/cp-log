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
	int n,m,k;
	cin>>n>>m>>k;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	int ctr=0;
	m-=1;
	for(int i=1;;i++){
		if(m-i<0 && m+i>=n)
			break;
		if(m-i>=0 && arr[m-i]!=0 && arr[m-i]<=k){
			ctr=i;
			break;
		}
		if(m+i<n && arr[m+i]!=0 && arr[m+i]<=k){
			ctr=i;
			break;
		}
	}
	cout<<ctr*10;
}	