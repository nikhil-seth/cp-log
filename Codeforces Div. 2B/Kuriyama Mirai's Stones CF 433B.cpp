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
	int n,m;
	cin>>n;
	LL arr[n+1],brr[n+1];
	arr[0]=brr[0]=0;
	FOR(i,1,n){
		cin>>arr[i];
		brr[i]=arr[i];
	}
	sort(brr,brr+n+1);
	FOR(i,1,n){
		arr[i]+=arr[i-1];
		brr[i]+=brr[i-1];
	}
	cin>>m;
	int type,l,r;
	while(m--){
		cin>>type>>l>>r;
		if(type==1)
			cout<<arr[r]-arr[l-1]<<endl;
		else
			cout<<brr[r]-brr[l-1]<<endl;
	}
}