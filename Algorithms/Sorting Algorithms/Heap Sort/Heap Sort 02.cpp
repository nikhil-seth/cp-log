#include<bits/stdc++.h>
using namespace std;
void Heapify(int arr[],int n,int i){ // Or Called Percolate Down.
	int l,r,max_ind,temp;
	max_ind=i;
	l=2*i+1;
	r=2*i+2;
	if(l<n && arr[l]>arr[max_ind])
		max_ind=l;
	if(r<n && arr[r]>arr[max_ind])
		max_ind=r;
	if(max_ind!=i){
		// Swapping with i & calling for percolating down.
		temp=arr[i];
		arr[i]=arr[max_ind];
		arr[max_ind]=temp;
		Heapify(arr,n,max_ind);
	}
}

void BuildHeap(int arr[],int n){
	for(int i=(n-1)/2;i>=0;i--)
		Heapify(arr,n,i);
}
void HeapSort(int arr[],int n){
	BuildHeap(arr,n);
	int temp;
	for(int i=n-1;i>0;i--){
		temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		Heapify(arr,i,0);
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	HeapSort(arr,n);
	for(auto &x:arr)
		cout<<x<<' ';
}