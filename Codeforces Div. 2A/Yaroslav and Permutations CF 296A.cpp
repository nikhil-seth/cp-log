#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[1001];
	for(auto &x:arr)
		x=0;
	int n,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		arr[t]++;
	}
	int m=-1;
	for(auto x:arr)
		m=max(m,x);
	if(m>((n+1)/2))
		cout<<"NO";
	else
		cout<<"YES";
}
