#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	sort(arr,arr+n);
	long ins1,ins2;
	ins1=arr[n-1]-arr[1];
	ins2=arr[n-2]-arr[0];
	cout<<min(ins1,ins2);
	return 0;
}