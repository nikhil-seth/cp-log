#include<bits/stdc++.h>
using namespace std;
// Binary Search in less comparison mode.
// TC : O(log(n)).
int BS(int arr[],int n,int data){
	int l=0;
	int r=n-1;
	int mid;
	while((r-l)>1){// Will run if & only if more than 1 element is there.
		mid = l + ( r - l )/2;
		if(arr[mid]<=data)
			l=mid;
		else
			r=mid;
	}
	if(arr[l]==data)
		return l;
	else
		return -1;
}
int main(){
	int data,n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	cin>>data;
	cout<<BS(arr,0,data);
	return 0;
}