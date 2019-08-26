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
	fastio
	//fio
	int n;
	cin>>n;
	long arr[n];
	ll sum=0;
	FORA(x,arr){
		cin>>x;
		sum+=x;
	}
	if(sum%3!=0 || n<3){
		cout<<0;
		return 0;
	}
	sum/=3;
	long right[n];
	ll x=0;
	right[n-1]=arr[n-1]==sum?1:0;
	x=arr[n-1];
	for(int i=n-2;i>=0;i--){
		x+=arr[i];
		right[i]=right[i+1];
		if(x==sum)
			right[i]++;
	}
	x=0;
	long val=0;
	if(arr[0]==sum)
		val++;
	x=arr[0];
	ll ans=val*right[2];
	for(int i=1;i<n-2;i++){
		x+=arr[i];
		if(x==sum){
			val++;
			ans+=right[i+2];
		}
	}

	cout<<ans;
}