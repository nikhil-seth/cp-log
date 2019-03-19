#include<bits/stdc++.h>
using namespace std;
// Binary Search
// TC : O(log(n)).


int BinarySearchRecursive(int arr[],int low,int high,int data){
	int mid=low + (high-low)/2;
	if(low>high)			// No Element.
		return -1;
	if(arr[mid]==data)
		return mid;
	else if(arr[mid]>data)
		return BinarySearchRecursive(arr,low,mid-1,data);
	else
		return BinarySearchRecursive(arr,mid+1,high,data);
}
int BinarySearchIterative(int arr[],int n,int data){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==data)
			return mid;
		else if(arr[mid]<data)
			low=mid+1;
		else
			high=mid-1;
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
	cout<<BinarySearchRecursive(arr,0,n-1,data);
	cout<<endl<<BinarySearchIterative(arr,n,data);
	return 0;
}