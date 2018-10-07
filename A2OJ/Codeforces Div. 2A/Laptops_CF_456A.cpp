// Link to problem : http://codeforces.com/problemset/problem/456/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	pair<int,int> x[n];
	for(auto i=0;i<n;i++)
		cin>>x[i].first>>x[i].second;
	sort(x,x+n);
	for(auto i=0;i<n-1;i++){
		if(x[i].second>x[i+1].second){
			cout<<"Happy Alex";
			return 0;
		}
	}cout<<"Poor Alex";

	return 0;
}