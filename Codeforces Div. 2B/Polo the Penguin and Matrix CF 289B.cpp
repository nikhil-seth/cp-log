#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int main(){
	int n,m,d;
	fastio
	cin>>n>>m>>d;
	int arr[n*m];
	int var,v2;
	cin>>arr[0];
	var=arr[0]%d;
	for(int i=1;i<n*m;i++){
		cin>>arr[i];
		v2=arr[i]%d;
		if(v2!=var){
			cout<<-1;
			return 0;
		}
	}
	sort(arr,arr+n*m);
	var=(n*m)/2;
	LL sum=0;
	for(int i=0;i<n*m;i++)
		sum+=(abs(arr[i]-arr[var]));
	cout<<sum/d;
}