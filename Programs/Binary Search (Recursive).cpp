// Binary Search (Recursive)
#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int low,int high,int n,int target){
	int mid=low+(high-low)/2;
	if(high<low)
		return -1;
	if(arr[mid]==target)
		return mid;
	else if(arr[mid]>target)
		return bs(arr,low,mid-1,n,target);
	else
		return bs(arr,mid+1,high,n,target);
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
	target=bs(arr,0,n-1,n,target);
	if(target==-1)
		cout<<"\nNot Found";
	else
		cout<<"\nFound at location :"<<target+1;
	return 0;
}