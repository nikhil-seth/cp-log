#include<bits/stdc++.h>
using namespace std;
// Merge Sort
// Based on Divide & Conquer.
template <class T>
void merge(T arr[],int l,int m,int r){
	int n1=m-l+1;
	int n2=r-m;
	int i,j,k;
	T L[n1],R[n2];
	for(int i=0;i<n1;i++)
		L[i]=arr[l+i];
	for(int i=0;i<n2;i++)
		R[i]=arr[m+i+1];
	
	i=0;
	j=0;
	k=l;

	while(i<n1 && j<n2){
		if(L[i]<=R[j])
			arr[k++]=L[i++];
		else
			arr[k++]=R[j++];
	}
	while(i < n1)
		arr[k++]=L[i++];
	while(j < n2)
		arr[k++]=R[j++];
}

template <class T>
void mergesort(T arr[],int l,int r){
	if(l<r){ // l>r -> No array l=r 1 elem
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int &x:arr)
		cin>>x;
	mergesort(arr,0,n-1);
	cout<<"Sorted Array :";
	for(int &x:arr)
		cout<<x<<endl;
	return 0;
}