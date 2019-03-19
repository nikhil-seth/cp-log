#include<bits/stdc++.h>
using namespace std;
// Searching Algorithms

int linear_search(int arr[],int n,int data){
	for(int i=0;i<n;i++){
		if(arr[i]==data)
			return i;
	}
	return -1;
}

int main(){
	int data,n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	cin>>data;
	cout<<linear_search(arr,n,data)+1;
	return 0;
}