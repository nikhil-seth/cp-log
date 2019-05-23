#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
using namespace std;
int main(){
	fastio
	//fio
	int n,k;
	cin>>n>>k;
	int arr[n];
	FORA(x,arr)
		cin>>x;
	int start=0;
	LL val=0,cmp;
	for(int i=0;i<k;i++)
		val+=arr[i];
	cmp=val;
	for(int i=k;i<n;i++){
		val=val-arr[i-k]+arr[i];
		//cout<<cmp<<' '<<start<<endl;
		if(val<cmp){
			start=i-k+1;
			cmp=val;
		}
	}
	cout<<start+1;
}

