// Binary Search (Iterative)
#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int n,int target){
	int low=0,high=n-1;
	int mid;
	while(low<=high){
		mid=low+(high-low)/2;
		if(arr[mid]==target)
			return mid;
		if(arr[mid]>target)
			high=mid-1;
		else if(arr[mid]<target)
			low=mid+1;
	}
	return -1;
}
int main(){
	int n,target;
	cout<<"Enter Array Size :";
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	sort(arr,arr+n);
	cout<<"\n\nSorted Array : ";
	for(auto x:arr)
		cout<<x<<' ';
	cout<<"\nEnter Target : ";
	cin>>target;
	target=bs(arr,n,target);
	if(target==-1)
		cout<<"\nNot Found";
	else
		cout<<"\nFound at location :"<<target+1;
	return 0;
}