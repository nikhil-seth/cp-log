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
	int pt=n/2;
	int ans=n;
	for(int i=0;i<n/2;i++){
		while(1){
			if(arr[i]*2<=arr[pt]){
				ans--;
				pt++;
				break;
			}
			else{
				pt++;
			}
			if(pt==n){
				break;
			}
		}
		if(pt==n)
			break;
	}
	cout<<ans;
}