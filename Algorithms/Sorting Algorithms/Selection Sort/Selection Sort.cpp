#include<bits/stdc++.h>
using namespace std;
/*
Selection Sort
Worst Case : O(n^2)
Best Case : O(n)
Avg Case : O(n^2)
Inplace Algo.
*/
template <class T>
void swap(T *a,T *b){
	T temp;
	temp=a;
	a=b;
	b=temp;
}

template <class T>
void selection_sort(T arr[],int n){
	// Code for selection sort.
	for(int i=0;i<n-1;i++){
		int key=i;
		for(int j=i+1;j<n;j++){
			if(arr[key]>arr[j])
				key=j;
		}
		swap(arr[key],arr[i]);
	}
}
// Stable Selection Sort ( Shifting is used as in insertion sort. )
template <class T>
void stable_selection_sort(T arr[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[min]>arr[j])
				min=j;
		}
		int key=arr[min];
		while(min>i){
			arr[min]=arr[min-1];
			min--;
		}
		arr[i]=key;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	stable_selection_sort(arr,n);
	cout<<"Sorted Array\n";
	for(auto &x:arr)
		cout<<x<<endl;
	return 0;

}