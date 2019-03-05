#include<bits/stdc++.h>
using namespace std;
// Insertion Sort
template <class T>
void insertion_sort(T arr[],auto n){
	// Code for Insertion Sort
	// Comparing of smallest element & inserting it at exact position in each iteration.
	for(auto i=1;i<n;i++){
		T key=arr[i];
		auto j=i;
		while(arr[j-1]>key && j>=1){
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=key;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	insertion_sort(arr,n);
	cout<<"Sorted Array :";
	for(auto &x:arr)
		cout<<x<<endl;
	return 0;
}