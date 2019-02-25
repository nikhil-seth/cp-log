#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,t,mi=INT_MAX;
	cin>>n;
	int arr[n];
	for(auto &x:arr){
		cin>>x;
	}
	for(auto &x:arr){
		int s=0;
		for(auto i=0;i<x;i++){
			cin>>t;
			s+=t;
		}
		x=x*15+s*5;
		mi=min(x,mi);
	}
	cout<<mi;
}
