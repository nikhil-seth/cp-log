#include<bits/stdc++.h>
using namespace std;
// Quick Sort
// Based on Divide & Conquer.
template <class T>
int partition (T arr[],int l,int r){
	int pivot=arr[r];
	int i=l-1;
	for(int j=l;j<r;j++){
		if(arr[j]<=pivot){
			i++;
			T temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}	
	i++;
	int temp=arr[r];
	arr[r]=arr[i];
	arr[i]=temp;
	return i;
}

template <class T>
void quicksort(T arr[],int l,int r){
	if(l<r){ // l>r -> No array l=r 1 elem
		int q=partition(arr,l,r);
		quicksort(arr,l,q-1);
		quicksort(arr,q+1,r);
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int &x:arr)
		cin>>x;
	quicksort(arr,0,n-1);
	cout<<"Sorted Array :";
	for(int &x:arr)
		cout<<x<<endl;
	return 0;
}