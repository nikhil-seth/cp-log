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
	int arr[n+2];
	memset(arr,0,sizeof(arr));
	int x;
	FOR(i,0,n-1){
		cin>>x;
		arr[x]+=1;
	}
	int ctr=0;
	for(int i=0;i<=n;){
		if(arr[i]==0)
			i++;
		else{
			ctr++;
			i+=3;
		}
	}
	cout<<ctr<<' ';
	ctr=0;
	FOR(i,0,n+1){
		if(arr[i]>=1){
			if(i>0 && arr[i-1]>1)
				arr[i]+=(arr[i-1]-1);
			ctr++;
			continue;
		}
		else if(i>0 && arr[i-1]>1){
			arr[i-1]--;
			ctr++;
			arr[i]++;
		}
		else if(i<n+1 && arr[i+1]>0){
			arr[i+1]--;
			arr[i]++;
			ctr++;
		}
	}
	cout<<ctr;
}