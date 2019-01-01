#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i) {// To heapify element i.
	int max_val,l,r;
	max_val=i;
	l=2*i+1;
	r=2*i+2;
	if(l<n && arr[l]>arr[max_val])
		max_val=l;
	if(r<n && arr[r]>arr[max_val])
		max_val=r;

	if(max_val!=i){
		swap(arr[i],arr[max_val]);
		heapify(arr,n,max_val);
	}
}
// heap satisfies elem that root node has elements less than it below, not that it is sorted.
void heapsort(int arr[],int n){
	for(int i=(n/2-1);i>=0;i--)
		heapify(arr,n,i);
	// Above loop has time complexity O(nlogn)
	// Makes the arr to heap.
	for(int i=n-1;i>=0;i--){
		swap(arr[0],arr[i]);
		heapify(arr,i,0);
	}
	// This also has tc O(nlogn)
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	heapsort(arr,n);
	for(auto &x:arr)
		cout<<x<<' ';
}