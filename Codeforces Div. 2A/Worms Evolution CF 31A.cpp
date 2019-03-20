#include <bits/stdc++.h>
using namespace std;
int bs(pair<int,int> arr[],int r,int data){
	int l=0,m;
	while(l<=r){
		if(l==r){
			if(arr[l].first==data)
				return l;
			else
				return -1;
		}
		else {
			m=l+(r-l)/2;
			if(arr[m].first==data)
				return m;
			else if(arr[m].first<data)
				l=m+1;
			else
				r=m-1;
		}
	}
	return -1;
}
int main(){
	int n,t;
	cin>>n;
	pair<int,int> arr[n];
	for(int i=0;i<n;i++){
		cin>>t;
		arr[i]=make_pair(t,i+1);
	}
	sort(arr,arr+n);
	for(int i=2;i<n;i++){
		for(int j=i-1;j>0;j--){
			int d=bs(arr,j-1,arr[i].first-arr[j].first);
			if(d!=-1){
				cout<<arr[i].second<<' '<<arr[j].second<<' '<<arr[d].second;
				return 0;
			}
		}
	}
	cout<<-1;
	return 0;
}
